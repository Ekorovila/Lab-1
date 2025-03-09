
#include <iostream>
using namespace std;

//Function to draw a horizontal line
void drawHorizontalLine(){
	cout << "_______________" << endl;
}

//Function to draw vertical line
void drawVerticalLine() {
	for (int i = 0; i < 5; i++) {
		cout << "|" << endl;
	}
}

//Function to draw a square
void drawSquare() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "*" << endl;
		}
	}
}

//Functionto draw a rectangle
void drawRectangle() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 7; j++) {
			cout << "*" << endl;
		}
	}
}

int main()
{
	int choice;

	while (true) {
		//Display menu
		cout << "\nMenu:\n";
		cout << "1) Draw a horizontal line\n";
		cout << "2) Draw a vertical line\n";
		cout << "3) Draw a square\n";
		cout << "4) Draw a rectangle\n";
		cout << "5) Quit\n";
		cout << "Enter your choice:";
		cin >> choice;

		//Perform action based on users choice
		switch (choice) {
		case 1:
			drawHorizontalLine();
			break;
		case 2:
			drawVerticalLine();
			break;
		case 3:
			drawSquare();
			break;
		case 4:
			drawRectangle();
			break;
		case 5:
			cout << "Exiting program. Have a good day!" << endl;
			return 0;
		default:
			cout << "Invalid choice, please try again :(" << endl;
		}
	}
	return 0;
}
   













