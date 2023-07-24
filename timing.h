#include <chrono>
#include<iostream>
using namespace std::chrono;
high_resolution_clock::time_point start, stop;
microseconds msec;
void timing_begin() {
  start = high_resolution_clock::now();
}
void timing_end() {
  stop = high_resolution_clock::now(); 
  msec = duration_cast<microseconds>(stop - start); 
  std::cout <<  "Time taken " << msec.count() << " microseconds\n";
}