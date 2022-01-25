#include <iostream>

using namespace std;

int main( ) {
    cout <<"Hello, welcome to Frank's Carpet Cleaning Service"<< endl;
	cout <<endl;
	
	int SmallRooms {0};
	cout <<"How many small rooms would you like cleaned?";
	cin >> SmallRooms;
	cout <<endl;
	
	int LargeRooms {0};
	cout <<"How many large rooms would you like cleaned?";
	cin >> LargeRooms;
	cout <<endl;
	cout <<endl;
	
	const int SmRmPrice {25};
	const int LgRmPrice {35};
	const double TaxRate {0.06};
	cout <<"Estimate for carpet cleaning service:"<< endl;
	cout <<"Number of small rooms: "<< SmallRooms << endl;
	cout <<"Number of large rooms: "<< LargeRooms << endl;
	cout <<"Price per small room: $"<< SmRmPrice << endl;
	cout <<"Price per large room: $"<< LgRmPrice <<endl;
	
	int SmallCost;
	int LargeCost;
	SmallCost = SmallRooms * SmRmPrice;
	LargeCost = LargeRooms * LgRmPrice;
	
	int Subtotal;
	Subtotal = SmallCost + LargeCost;
	cout <<"Subtotal Cost: $"<< Subtotal <<endl;
	
	double TaxCost {0.00};
	TaxCost = Subtotal * TaxRate;
	cout <<"Tax: $"<< TaxCost <<endl;
	cout <<"========================================"<<endl;
	
	
	const int estimateExpiry {30}; //days
	cout <<"Total Estimate: $"<< Subtotal + TaxCost <<endl;
	cout <<"This estimate is valid for "<< estimateExpiry <<endl;
	
	return 0;

}