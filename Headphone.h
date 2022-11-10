#pragma once
using namespace std;
#include <string>
#include <iostream>
static  int headcounter;
struct Headphone
{string name;
	  int mAh;
	  void InitNullHeadphone();
	  void  InitHeadphone(int mAh, string name);
void EnterHeadphone(int mAh, string name);
void PrintHeadphone(int mAh, string name);
void correctHeadphone(int mAh, string name);
};


