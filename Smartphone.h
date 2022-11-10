#pragma once
using namespace std;
#include <string>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
#include "Processor.h"
static  int counter;
struct Smartphone
{
string name;
	  int mAh;
	  Processor Pr;
	  void InitSmartphoneNull();
	  void InitSmartphone(int mAh, string name);
		  void printSmartphone(int mAh, string name);
	  void EnterSmartphone(int mAh, string name);
	  void correct(int mAh, string name);
	  
};

