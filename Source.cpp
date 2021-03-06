#include <iostream>
#include<time.h>
#include <vector>
#include <chrono>

#include "Bogosort.h"
#include "Bozosort.h"
using namespace std;
int main()
{
	int tmp;

	//vector<int> list = { 3,4,1,2,5,0,7,9,8 };

	cout << "Enter the number of elements in the list ";
	int n,tmp2;
	cin >> n;
	vector<int> list;

	for (int i = 0; i < n; i++)
	{
		cout<<"Enter a number to add "<< endl;
		cin >> tmp2;
		list.push_back(tmp2);
	}
	cout << "Color outputs may appear diffrent or not work on macOS!"<<endl;
	cout << "Choose the desired Algorithm :- \n1) BogoSort\n2) BozoSort \n0) Exit" << endl;
	cin >> tmp;
	while (tmp != 0) {
		if (tmp == 1) {
			auto t1 = chrono::high_resolution_clock::now();
			Bogosort myobj;
			myobj.Sort(list);
			auto t2 = chrono::high_resolution_clock::now();

			cout << "BogoSort took: \033[91m" << chrono::duration<double, milli>(t2 - t1).count() << " ms\033[0m";
			break;
		}
		else if (tmp == 2) {
			auto t1 = chrono::high_resolution_clock::now();
			Bozosort myobj;
			myobj.Sort(list);
			auto t2 = chrono::high_resolution_clock::now();

			cout << "BozoSort took: \033[91m" << chrono::duration<double, milli>(t2 - t1).count() << " ms\033[0m";

			break;
		}
		else {
			cout << "Enter a valid number" << endl;
		}
	}
}
