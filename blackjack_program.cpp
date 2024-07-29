#include <iostream>
#include <random>

using namespace std;

int main() {
	int hitOrMiss;
	bool var;

	cin >> hitOrMiss;

	if (hitOrMiss == 1 || hitOrMiss == 0) {
		var = true;
	}


	int cardTotal1 = 0;
	int cardTotal2 = 0;

		int usercardTotal1 = 0;
		int usercardTotal2 = 0;

	// Random number generators
	random_device rd1;
	mt19937 gen1(rd1());
	uniform_int_distribution<> int_dis1(0, 10);
	int posCardRand1 = int_dis1(gen1);

	random_device rd2;
	mt19937 gen2(rd2());
	uniform_int_distribution<> int_dis2(0, 3);
	int posTypeRand1 = int_dis2(gen2);

	random_device rd3;
	mt19937 gen3(rd3());
	uniform_int_distribution<> int_dis3(0, 10);
	int posCardRand2 = int_dis3(gen3);

	random_device rd4;
	mt19937 gen4(rd4());
	uniform_int_distribution<> int_dis4(0, 3);
	int posTypeRand2 = int_dis4(gen4);


			random_device rd5;
			mt19937 gen5(rd5());
			uniform_int_distribution<> int_dis5(0, 10);
			int userposCardRand1 = int_dis5(gen5);

			random_device rd6;
			mt19937 gen6(rd6());
			uniform_int_distribution<> int_dis6(0, 3);
			int userposTypeRand1 = int_dis2(gen6);

			random_device rd7;
			mt19937 gen7(rd7());
			uniform_int_distribution<> int_dis7(0, 10);
			int userposCardRand2 = int_dis7(gen7);

			random_device rd8;
			mt19937 gen8(rd8());
			uniform_int_distribution<> int_dis8(0, 3);
			int userposTypeRand2 = int_dis8(gen8);



	// Arrays for card values and types
	string posCard[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "K", "Q"};
	string posType[] = {"♤", "♡", "♢", "♧"};
	int cardValues[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10};  // Map indices to actual card values

	// Calculate card totals
	cardTotal1 = cardValues[posCardRand1];
	cardTotal2 = cardValues[posCardRand2];

			usercardTotal1 = cardValues[userposCardRand1];
			usercardTotal2 = cardValues[userposCardRand2];

	// Total calculation
	int houseTotal = cardTotal1 + cardTotal2;

				int userTotal = usercardTotal1 + usercardTotal2;


	// Output results
	cout << "HOUSE:\n";
	cout << "\n" << posCard[posCardRand1] << posType[posTypeRand1];
	cout << "\n" << posCard[posCardRand2] << posType[posTypeRand2];
	cout << "\n\nHOUSE TOTAL: \n" << houseTotal << endl;

	cout << "__________________________________________________________________________________\n";
	cout << "\n";
	string endGame;
		if (var == true) {
			if (hitOrMiss == 1 && (userTotal + cardTotal1) <= 21 ) {
				if((userTotal + cardTotal1) > houseTotal) {
					endGame = "WINNER!";
				} else if ((userTotal + cardTotal1) == houseTotal) {
					endGame = "TIE!"; 
				} else if ((userTotal + cardTotal1) < houseTotal) {
					endGame = "YOU LOST!";
				} else {
					cout << "ERROR";
				}

			} else {
				if (userTotal <= 21) {
					if (userTotal > houseTotal) {
						endGame = "WINNER!";
					} else if (userTotal == houseTotal) {
						endGame = "TIE!";
					} else if (userTotal < houseTotal) {
						endGame = "YOU LOST!";
					}
				}
			}
		} else {
			cout << " ";
		}
		

	cout << "\n" << endGame;
	cout << "\n" << "\n";
	cout << "__________________________________________________________________________________\n";

	cout << "\n" << "YOU:" << "\n";

	if(hitOrMiss == 0) {


	cout << "\n" << posCard[userposCardRand1] << posType[userposTypeRand1];
	cout << "\n" << posCard[userposCardRand2] << posType[userposTypeRand2];
	cout << "\n\nYOUR TOTAL: \n" << userTotal << endl;
	} else if (hitOrMiss == 1) {

	cout << "\n" << posCard[userposCardRand1] << posType[userposTypeRand1];
	cout << "\n" << posCard[userposCardRand2] << posType[userposTypeRand2];
	cout << "\n" << posCard[posCardRand1] << posType[posTypeRand1];

	cout << "\n\nYOUR TOTAL: \n" << userTotal + cardTotal1 << endl;
	} else {
		cout << "INPUT ERROR... ONLY 1 OR 0!";
	}

cout << "\n" << "1 = hit\n";
cout << "0 = stay\n";

	}
