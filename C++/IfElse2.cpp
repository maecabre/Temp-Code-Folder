//------------------------------------------------------------------------------
// IfElse2.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	// \t is a tab

	cout << "1. \tAdd new record." << endl;
	cout << "2. \tDelete record." << endl;
	cout << "3. \tView record." << endl;
	cout << "4. \tSearch record." << endl;
	cout << "5. \tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if(value == 1){
		cout << "Adding new record..." << endl;
	} else if(value == 2){
		cout << "Deleting record..." << endl;
	} else if(value == 3){
		cout << "Viewing record..." << endl;
	} else if(value == 4){
		cout << "Searching record..." << endl;
	} else if(value == 5){
		cout << "Quitting record..." << endl;
	} else{
		cout << "Invalid Option." << endl;
	}

	return 0;
}