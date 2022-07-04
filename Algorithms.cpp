#include "Algorithms.h"
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;
void Algorithms::print(vector<int>& list, unsigned int counter)
{
	int ctr = 31;
	cout << "{ ";
	for (int i = 0; i < list.size() - 1; i++) {
		cout << "\033[" << ctr << "m" << list.at(i) << "\033[0m" << " , ";
		ctr++;
		if (ctr == 37)
			ctr = 91;
	}
	cout << "\033[" << ctr << "m" << list.at(list.size() - 1) << "\033[0m" << " }" << endl;
	if (sorted(list)) {
		cout << endl << "Number of shuffles : " << counter << endl;
	}
}
bool Algorithms::sorted(vector<int>& list) {
	for (int i = 0; i < list.size() - 1; i++) {
		if (!(list.at(i) <= list.at(i + 1))) {
			return false;
		}
	}
	return true;
}
