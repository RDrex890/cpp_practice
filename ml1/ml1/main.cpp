/*****************
//Ruth Drexler
//17Jan2022
//Calculate areas of a square and circle,
//calculate the difference in sq m, 
//calculate volume of cube after rounding down input,
//recalculate volume of cube after rounding up input;
//displaying all output using setprecision
//*****************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main( ) {
	
	double length = 0.0000;
	const double pi = 3.14159;
	
	//Intro, request and verify input
    cout <<"Geometry formulas by Ruth Drexler"<< endl;
	cout <<"Enter a floating point number for length, in centimeters: "<<endl;
	cin >> length;
	cout <<endl;
	cout <<"The number you entered is "<< length <<" cm, or "
		 << setprecision(4) << length/10 <<" m."<< '\n';
		 
	//Calculate areas
	double meters = length/10;  //length in meters
	double radius = meters/2;  //radius in meters
	double areaSqr = pow (meters, 2);   //area of the square
	double areaCirc = pi * pow (radius, 2);  //area of the circle
	cout <<"The area of a square of this length is "<< fixed
		 << areaSqr <<" sq. m."<< '\n';
	cout <<"The area of a circle of this diameter is "<< fixed
		 << areaCirc <<" sq. m."<< '\n';
		 
	//Calculate the difference between the areas
	cout <<"The difference between the two areas is "<< fixed
		 << areaSqr - areaCirc <<" sq. m."<< '\n';
	cout <<endl;
	
	//Calculate the cube volumes from rounded numbers
	double metersDown = floor(meters);  //length in meters rounded down
	double metersUp = ceil(meters);  //length in meters rounded up
	cout <<"The volume of a cube of this length rounded down is "<< fixed
		 << pow (metersDown, 3) <<"cu. m."<< '\n';
	cout <<	"The volume of a cube of this length rounded up is "<< fixed
		 << pow (metersUp, 3) <<"cu. m."<<endl;
	
    return 0;
}