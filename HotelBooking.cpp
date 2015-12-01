//  The famous first program  

#include <iostream>
#include <string>

using namespace std;

enum RoomChoice { D, T, S, F, ERROR };

void main()
{
	int no_nights;
	int total = 0;
	string room_type;
	char code = ' ';
	bool voucher;
	string check = "Yes"
    string check2;

	RoomChoice Choice = ERROR;

	cout << "Room		   Price	Code\n";
	cout << "------------------------------------\n";
	cout << "Deluxe Room        \x9C 200		D\n";
	cout << "Twin Room          \x9C 150		T\n";
	cout << "Single             \x9C 110		S\n";

	while (code != 'F'){
		cout << "What room type would you like? Please use the corresponding Room Code. Press F when you have finished booking any number of rooms. \n";
		cin >> code;
		if (code != 'F') {
			cout << "How many nights would you like to stay?\n";
			cin >> no_nights;
		}
		switch (code) {
		case 'D':
			Choice = D;
			break;
		case 'T':
			Choice = T;
			break;
		case 'S':
			Choice = S;
			break;
		case 'F':
			Choice = F;
			break; 
		default:
			Choice = ERROR;
		}

		switch (Choice) {
		case D:
			total = no_nights * 200 + total;
			break;
		case T:
			total = no_nights * 150 + total;
			break;
		case S:
			total = no_nights * 110 + total;
			break;
		case F:
			
			cout << "Do you have a groupon voucher? Please enter 'Yes' or 'No'.\n";
			cin >> check2;
			if (check == check2){
		    	cout << "hello"
		    }
			else {
				cout << "Hello"
			}
			break;
		default:
			cout << "You have entered a error. Please enter a valid Room Code (D, T, S)";
		}

	
	}


}
