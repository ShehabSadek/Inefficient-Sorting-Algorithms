#pragma once
#include "Algorithms.h"
#include<vector>

using namespace std;

class Bozosort
{
public:
	void Sort(vector<int>& list);
private:
	Algorithms myObj;
	unsigned int counter = 0;
	void shuffle(vector<int>& list);
};