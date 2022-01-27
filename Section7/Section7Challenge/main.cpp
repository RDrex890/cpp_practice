#include <iostream>
#include <vector>

using namespace std;

int main( ) {
    
	vector <int> vector1; //declare 1d vectors
	vector <int> vector2;
	
	vector1.push_back (10); //add lines & initialize
	vector1.push_back(20);
	cout << vector1.at (0) << "\n"; //display vector data at supplied index
	cout << vector1.at (1) << "\n";
	cout << vector1.size () << "\n"; //display vector size
	cout  << "\n";
	
	vector2.push_back(100);
	vector2.push_back(200);
	cout << vector2.at (0) << "\n";
	cout << vector2.at (1) << "\n";
	cout << vector2.size () << "\n";
	cout << "\n";
	
	vector <vector <int>> vector_2d; //declare 2d vector
	
	vector_2d.push_back(vector1); //add rows and initialize w/ 1d vector data
	vector_2d.push_back(vector2);
	cout << vector_2d.at(0).at(0) << "\n";; //display 2d vector data at supplied index
	cout << vector_2d.at(0).at(1) << "\n";;
	cout << vector_2d.at(1).at(0) << "\n";;
	cout << vector_2d.at(1).at(1) << "\n";;
	cout << "\n";
	
	vector1.at(0) = 1000; //change vector data;
	
	cout << vector_2d.at(0).at(0) << "\n";; //display 2d vector data at supplied index
	cout << vector_2d.at(0).at(1) << "\n";;
	cout << vector_2d.at(1).at(0) << "\n";;
	cout << vector_2d.at(1).at(1) << "\n";;
	cout << "\n";
	
	cout << vector1.at (0) << "\n"; //display vector data at supplied index
	cout << vector1.at (1) << "\n";
	cout << vector1.size () << "\n"; //display vector size
	cout  << "\n";
	
	
	
    return 0;
}