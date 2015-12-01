
#include <iostream>
#include <string>
#include <windows.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

using namespace std;

enum HungryState { W, P, H, S, D };    // Well-Fed, Slightly Pekish, Hungry, Starving, Dead
enum SleepState { WA, A, T, FA, C };   // Wide-Awake, Awake, Tired, Falling-Asleep, Collapsed


string petName(string checking) {


	string nameOfPet;

	if (checking == "Yes") {
		cout << "What would you like to name your pet? ";
		cin >> nameOfPet;
	}
	else {
		nameOfPet = "your pet";
	}
	return nameOfPet;
}

int main() {

	char checkFeed;
	string checkname;
	string nameOfPet;
	bool isAlive = true;

	HungryState Hungry = H;
	SleepState Sleepy = T;

	cout << "Would you like to name your pet? Please type 'Yes' or 'No'." << endl;
	cin >> checkname;

	nameOfPet = petName(checkname);

	do {
		cout << "Press 'F' to feed your pet!" << endl;
		cin >> checkFeed;

		std::this_thread::sleep_for(std::chrono::seconds(1/2));

		switch (checkFeed) {
		case 'F':
			switch (Hungry) {
			case P:
				Hungry = W;
				break;
			case H:
				Hungry = P;
				break;
			case S:
				Hungry = H;
				break;
			case D:
				cout << nameOfPet << " is dead." << endl;
				isAlive = false;
	        	break;
			}

			switch (Hungry){
				case W:
					cout << nameOfPet << " is well-fed." << endl;
					break;
				case P:
					cout << nameOfPet << " is fairly peckish." << endl;
					break;
				case H:
					cout << nameOfPet << " is hungry." << endl;
					break;
				case S:
					cout << nameOfPet << " is starving." << endl;
					break;

				}


			 //nested switch hungry finish

		} //switch checkFeed finish



	} while (isAlive = true);
		} 
