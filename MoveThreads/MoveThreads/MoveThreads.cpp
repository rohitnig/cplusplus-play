#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int main()
{
	// vector container stores threads
	vector<std::thread> workers;
	for (int i = 0; i < 5; i++) {
		auto t = thread([i]()
		{	
			std::cout << "thread function: " << i << "\n";
		});
		workers.push_back(std::move(t));
	}
	cout << "main thread\n";

	// Looping every thread via for_each
	// The 3rd argument assigns a task
	// It tells the compiler we're using lambda ([])
	// The lambda function takes its argument as a reference to a thread, t
	// Then, joins one by one, and this works like barrier

	for (auto& t : workers)
	{
		assert(t.joinable());
		t.join();
	};

	getchar();
	return 0;
}
