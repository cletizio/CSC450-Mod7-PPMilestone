//============================================================================
// Name        : CSC450-Mod7-PPMilestone.cpp
// Author      : Chris Letizio
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : A C++ example of using concurrency concepts for CSC450
//               Programming III course.
//============================================================================

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int globalCount = 0;

//Create mutex for sync
mutex mtx;

void countUp() {
	for (int i = 1; i<=20; ++i){

		// add mutex lock
		lock_guard <mutex> lock(mtx);
		cout << "Count up to 20: " << i << endl;
		globalCount++;
	}

	// Simulate work of other processes
	this_thread::sleep_for(chrono::milliseconds(150));
}

void countDown(){
	for (int i =20; i >= 0; --i) {
		//add mutex lock
		lock_guard<mutex> lock(mtx);
		cout << "Count down from 20: " << i << endl;
		globalCount--;
	}
	// Simulate work of other processes
	this_thread::sleep_for(chrono::milliseconds(200));

}

int main() {

	// Create threads using the methods above.
	thread t1(countUp);
	thread t2(countDown);

	// Join the threads to sync
	t1.join();
	t2.join();

	cout << "Final count: " << globalCount << endl;

	return 0;
}
