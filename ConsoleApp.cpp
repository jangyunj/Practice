// ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {

	double sales = 95000;
	cout << "Sales : $" << sales << endl;

	const double stateTaxRate = .04;
	double stateTax = sales * stateTaxRate;
	cout << "State tax: $" << stateTax << endl;


	//int sales = 95000;
	//int stateTax = 0.04;
	//int countyTax = 0.02;
	//int totalState = sales * stateTax;
	//int totalCounty = sales * countyTax;

	//cout << "totalState = " << totalState << endl
	//	<< "totalCounty = " << totalCounty;
	//

}




//int main() {
//
//    int x = 10;
//    int y = 20;
//    
//    cout << "x = " << x << endl
//         <<"y = " << y;
//
//    return 0;
//}

//int main() {
//    int a = 1;
//    int b = 2;
//    int c = a;
//    a = b;
//    b = c;
//
//    std::cout << a;
//
//}