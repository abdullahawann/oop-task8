#include <iostream>
#include "one.h"
using namespace std;

int main()
{
	Square S1;
	Rectangle S2;
	Triangle S3;

	cout << "The area of Square is = " << S1.getArea() << endl;
	cout << "Painting cost of square is = $" << S1.getCost(S1.getArea()) << endl << endl;

	cout << "The area of Rectangle is = " << S2.getArea() << endl;
	cout << "Painting cost of rectangle is = $" << S2.getCost(S2.getArea()) << endl << endl;

	cout << "The area of triangle is = " << S3.getArea() << endl;
	cout << "Painting cost of triangle is = $" << S3.getCost(S3.getArea()) << endl << endl;

	system("pause");
	return 0;
}

