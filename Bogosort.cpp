#include "Bogosort.h"
#include "Algorithms.h"
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;

void Bogosort::Sort(vector<int>& list)
{
	while (!myObj.sorted(list)) {
		shuffle(list);
	}

}

void Bogosort::shuffle(vector<int>& list)
{
	int tmp;
	int rnd;
	srand(time(0));
	for (int i = 0; i < list.size(); i++) {
		rnd = (rand() + (counter % list.size())) % list.size();
		tmp = list.at(i);
		list.at(i) = list.at(rnd);
		list.at(rnd) = tmp;
	}
	counter++;
	myObj.print(list, counter);
}


