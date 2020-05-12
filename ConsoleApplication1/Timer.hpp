#pragma once
#ifndef TIMER_H
#define TIMER_H

#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std::chrono;


class Timer {
private:
	time_t tstart;


	
	
	 



public: 
	void start();
	void restart();
	double stop();
	
	
};





#endif
