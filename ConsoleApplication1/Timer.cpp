#include "Timer.hpp"
#include <chrono>
#include <time.h>




void Timer::start()
{

    tstart = time(0);
    // you can also use 'chrono::microseconds' etc.
    

}


void Timer::restart()
{

    tstart = time(0);
    // you can also use 'chrono::microseconds' etc.


}

double Timer::stop()
{

    double seconds_since_start = difftime(time(0), tstart);
    return seconds_since_start;

}
