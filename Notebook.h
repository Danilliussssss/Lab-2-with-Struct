#pragma once
#pragma once
using namespace std;
#include <string>
#include <iostream>
#include <stdio.h>
#include "VideoAdapter.h"
static  int NoteCounter;
struct Notebook
{
public:
	string name;
	int mAh;
	VideoAdapter Video;
	void InitializtNull(string name);
	
void	  SwipeNotebook(int mAh, string name);
	  void EnterNotebook(int mAh, string name);
	  void PrintNotebook(int mAh, string name);
 void correctNotebook(int mAh, string name);
};


