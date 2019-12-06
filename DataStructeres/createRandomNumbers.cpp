#include <iostream>


using namespace std;

// This program will create same sequence of  
// random numbers on every program run  
int main(void) 
{ 
    // Loop 5 time to generate 5 random numbers 
    for (int i = 1; i < 6; i++){ 
		int newNumber = rand();// rand() is used to generate a random number
		newNumber = newNumber % 100; //making sure that number is from 0 to 99
		cout << "\nData Element " << i<< ": " <<  newNumber << endl;// printing the number
		cout << "\n"; 
	}

    return 0; 
}
