#include <curl/curl.h>
#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <string>
#include <regex>
//#include <json.hpp>
//#include <json/json.h>

#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

//using json = nlohmann::json;
using namespace rapidjson;
using namespace std;

size_t CurlWrite_CallbackFunc_StdString(void *contents, size_t size, size_t nmemb, string *s)
{
    size_t newLength = size*nmemb;
    size_t oldLength = s->size();
    try
    {
        s->resize(oldLength + newLength);
    }
    catch(bad_alloc &e)
    {
        //handle memory problem
        return 0;
    }

    copy((char*)contents,(char*)contents+newLength,s->begin()+oldLength);
    return size*nmemb;
}

int main(int argc, char* argv[])
{
   Document json_object;
   CURL *curl;
   CURLcode res;
   string url { "http://finance.google.com/finance/info?client=ig&q=NASDAQ:" };

   curl = curl_easy_init();
   if(curl) {
	if (argc>1) url += argv[1]; else url += "AAPL";
	string s;
	curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CurlWrite_CallbackFunc_StdString);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &s);
	res = curl_easy_perform(curl);
	/* always cleanup */
	curl_easy_cleanup(curl);
	
	replace(s.begin(), s.end(), '\n', ' ');
	replace(s.begin(), s.end(), '/', ' ');
	replace(s.begin(), s.end(), '[', ' ');
	replace(s.begin(), s.end(), ']', ' ');
	
	//regex reg("\[");
	//s = regex_replace (s, reg, "");
	//cout << s << endl;

	json_object.Parse(s.c_str());
	assert(json_object.IsObject());
	cout << json_object["l"].GetString() << endl;
   }
   return 0;
}
