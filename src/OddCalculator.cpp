/*
 * OddCalculator.cpp
 *
 *  Created on: 27 Jun 2018
 *      Author: igoroya
 */

#include "OddCalculator.h"
#include <iostream>
using namespace std;

OddCalculator::OddCalculator() {
	// TODO Auto-generated constructor stub

}

OddCalculator::~OddCalculator() {
	// TODO Auto-generated destructor stub
}

void OddCalculator::IsOdd(int value) {
	if (value % 2 == 0) {
		cout<<"It is even!"<<endl;
	}
	else {
		cout<<"It is odd!"<<endl;
	}
}

