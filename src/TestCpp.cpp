//============================================================================
// Name        : TestCpp.cpp
// Author      : Igor Oya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "OddCalculator.h"
using namespace std;

int main() {
	cout << "Calculating if off or even" << endl;
	OddCalculator *calc = new OddCalculator();
	int value = 1;
	calc->IsOdd(value);
	value = 2;
	calc->IsOdd(value);
	delete calc;
	cout << "Done" << endl;
	return 0;
}
