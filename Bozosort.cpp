#include "Bozosort.h"
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;

void Bozosort::Sort(vector<int>& list)
{
	while (!myObj.sorted(list)) {
		shuffle(list);
	}
}

void Bozosort::shuffle(vector<int>& list)
{
	srand(time(0));
	int r1, r2, tmp;
	r1 = (rand() + (counter % list.size() )) % list.size();
	r2 = (rand() + (counter * rand())) % list.size();
	if (r1 == r2) {
		r2 = (rand() + (1 + counter * rand())) % list.size();
	}
	tmp = list.at(r1);
	list.at(r1) = list.at(r2);
	list.at(r2) = tmp;


	counter++;
	myObj.print(list, counter);

}
