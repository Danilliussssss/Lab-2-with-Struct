#pragma once
using namespace std;
#include <string>
#include <iostream>

struct Processor
{
float GHz;
string name;
	 
	  void  InitNull();
	  void InitProcessor(float GHz, string name);
	  void  PrintProcessor(float GHz, string name);
void EnterProcessor(float GHz, string name);
void correctProcessor(int mAh, string name);
};


