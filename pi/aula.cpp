#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	cout << "this programm calculates the area and perimeter of a circle, manually iterating pi: " << endl;
	double a = 4.0;
	while(true){
		char io;
		double b = 1.0;
		double pi = 4.0;
		int counter;
		double r;
		double per;
		double ar;
		cout << "define how many iterations of pi: " << endl << "3,141 after 2500" << endl;
		cin >> counter;
		while(counter > 0){
			cout << setprecision(100) << pi << "\n";
			if (b > 0.0){
				b = b + 2.0;
			} else {
				b = b - 2.0;
			}
			b *= -1.0;
			pi += (a / b);
			counter--;      
		}
		cout << "Define the radius of the circle:" << endl;
		cin >> r;
		per = pi * 2 * r;
		ar = pi * pow (r,2);
		cout << "Perimeter = " << per << " cm;"<< endl << "Area= " << ar << " cm2.";
		cout << "continue? (y/n)";
		cin >> io;
		if(io !='y'){
			break;
		}
		
	}
	return 0.0;	
}