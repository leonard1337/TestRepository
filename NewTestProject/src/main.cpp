/*
 * main.cpp
 *
 *  Created on: 03.12.2015
 *      Author: Leonard
 */

#include <stdio.h>
#include <thread>

void mainThread1() {
	printf("thread 1!\n");
}

void mainThread2(int x) {
	printf("thread 2: %d!\n", x);
}

int main() {
	printf("Threads 1 and 2 are executed in parllel!\n");

	std::thread first(mainThread1); //spawns a new thread that calls mainThread0()
	std::thread second(mainThread2, 125);  //spawns a new thread that calls mainThread1()

	first.join(); //main thread pauses until first thread finishes
	second.join(); //main thread pauses until second thread finishes

	return 0;
}


