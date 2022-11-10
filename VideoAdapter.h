#pragma once
using namespace std;
#include <string>
#include <iostream>
struct VideoAdapter
{
	string name;
	int TF;
	void	  InitVideo(int mAh, string name);
	void EnterVideo(int mAh, string name);
	void PrintVideo(int mAh, string name);
	void correctVideo(int mAh, string name);
};

