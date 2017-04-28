#include <curl/curl.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <json.hpp>

size_t CurlWrite_CallbackFunc_StdString(void *contents, size_t size, size_t nmemb, std::string *s)
{
    size_t newLength = size*nmemb;
    size_t oldLength = s->size();
    try
    {
        s->resize(oldLength + newLength);
    }
    catch(std::bad_alloc &e)
    {
        //handle memory problem
        return 0;
    }

    std::copy((char*)contents,(char*)contents+newLength,s->begin()+oldLength);
    return size*nmemb;
}

int main(int argc, char* argv[])
{
   CURL *curl;
   CURLcode res;
   std::string url { "http://finance.google.com/finance/info?client=ig&q=NASDAQ:" };

   curl = curl_easy_init();
   if(curl) {
	if (argc>1) url += argv[1]; else url += "AAPL";
	std::string s;
	std::cout << url << std::endl;
	curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CurlWrite_CallbackFunc_StdString);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &s);
	res = curl_easy_perform(curl);
	/* always cleanup */
	curl_easy_cleanup(curl);
	printf("Data is:\n%s\n-------------");
	std::cout << s << std::endl;
   }
   return 0;
}
