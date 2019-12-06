#include <iostream>


using namespace std;

// This program will create same sequence of  
// random numbers on every program run  
int main(void) 
{ 
	cout << " \n\t\t\t Number \t Hash Value(k%17) \n"; 
    // Loop 5 time to generate 5 random numbers 
    for (int i = 1; i < 6; i++){ 
		int newNumber = rand();// rand() is used to generate a random number
		newNumber = newNumber % 100; //making sure that number is from 0 to 99
		cout << "\nData Element " << i << ": \t   " <<  newNumber <<"\t\t\t" <<newNumber%17 <<endl;// printing the number
		//cout << "\n"; 
	}

	cout << "\n"; 
    return 0; 
}
