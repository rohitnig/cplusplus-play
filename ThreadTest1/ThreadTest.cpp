#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

#define MAX_THREADS 10

using namespace std;

mutex m;
condition_variable cv;
bool ready = false;

void call_thread(int count) {
	std::unique_lock<std::mutex> lck(m);

	while (!ready) cv.wait(lck);
//	m.lock();
		cout << "Hello World!\tThe thread count is " << count << endl;
//	m.unlock();
}

void go() {
	std::unique_lock<std::mutex> lck(m);
	ready = true;
	cv.notify_all();
}

int main() {

	thread t[MAX_THREADS];

	for (int i = 0; i < MAX_THREADS; i++) {
		t[i] = thread(call_thread, i);
	}

	go();
	for (auto& th: t) th.join();

	getchar();

	return 0;
}