// reads until positive integer is read, returns lowest negative integer

#include <iostream>
using namespace std;

int FindSmallestValue() {
   int inVal;
	int minVal;

	cin >> inVal;
	minVal = inVal;

	while (inVal <= 0) {
		if (inVal < minVal) {
			minVal = inVal;
		}

		cin >> inVal;
	}

	return minVal;
}

int main() {
	int minVal;

	minVal = FindSmallestValue();

	cout << minVal << endl;

	return 0;
}