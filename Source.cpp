
#include <iostream>
#include <windows.h>  // For colors
#include<ctime>
#include<time.h>
using namespace::std;// Implement std
void display(void);
void win(void);
void choice(void);
void compChoice(void);

int s[10]{ 1,1,1,1,1,1,1,1,1,1 };

int ch;

int main()
{
	srand(time(0));
	cout << "\t   Tic Tac Toe!";
	int i = 1;

	while (i <= 5) {
		cout << "\n\n";
		display(); // Call display function, displays new values
		choice(); // Users choice
		cout << "\n\n";
		win();
		compChoice();
		win();
		i++;
	}

	return 0;

}
void win(void) {

	if (s[1] == 2 && s[2] == 2 && s[3] == 2)
	{
		cout << "\nX Won in row 1 ";
		system("Color 0A");
		exit(0);
	}

	if (s[4] == 2 && s[5] == 2 && s[6] == 2)
	{
		cout << "\nX Won in second row ";
		system("Color 0A");
		exit(0);
	}

	if (s[7] == 2 && s[8] == 2 && s[9] == 2)
	{
		cout << "\nX Won third row ";
		system("Color 0A");
		exit(0);
	}

	if (s[1] == 2 && s[5] == 2 && s[9] == 2) {
		cout << "\nX Won diagonally with 1, 5, and 9.";
		system("Color 0A");
		exit(0);
	}

	if (s[3] == 2 && s[5] == 2 && s[7] == 2) {
		cout << "\nX Won diagonally with 3, 5, and 7";
		system("Color 0A");
		exit(0);
	}

	if (s[1] == 2 && s[4] == 2 && s[7] == 2) {
		cout << "\nX Won in column 1";
		system("Color 0A");
		exit(0);
	}

	if (s[2] == 2 && s[5] == 2 && s[8] == 2) {
		cout << "\nX Won in column 2";
		system("Color 0A");
		exit(0);
	}

	if (s[3] == 2 && s[6] == 2 && s[9] == 2) {
		cout << "\nX Won in column 3";
		system("Color 0A");
		exit(0);
	}

	////computer win 
	if (s[1] == 3 && s[2] == 3 && s[3] == 3)
	{
		cout << "\nComputer Won in row 1 ";
		system("Color 4");
		exit(0);
	}

	if (s[4] == 3 && s[5] == 3 && s[6] == 3)
	{
		cout << "\nComputer won in second row ";
		system("Color 4");
		exit(0);
	}

	if (s[7] == 3 && s[8] == 3 && s[9] == 3)
	{
		cout << "\nComputer Won in third row ";
		system("Color 4");
		exit(0);
	}

	if (s[1] == 3 && s[5] == 3 && s[9] == 3) {
		cout << "\nComputer Won diagonally with 1, 5, and 9.";
		system("Color 4");
		exit(0);
	}

	if (s[3] == 3 && s[5] == 3 && s[7] == 3) {
		cout << "\nComputer Won diagonally with 3, 5, and 7";
		system("Color 4");
		exit(0);
	}

	if (s[1] == 3 && s[4] == 3 && s[7] == 3) {
		cout << "\nComputer Won in column 1";
		system("Color 4");
		exit(0);
	}

	if (s[2] == 3 && s[5] == 3 && s[8] == 3) {
		cout << "\nComputer Won in column 2";
		system("Color 4");
		exit(0);
	}

	if (s[3] == 3 && s[6] == 3 && s[9] == 3) {
		cout << "\nComnputer Won in column 3";
		system("Color 4");
		exit(0);
	}
}

void display(void)
{
	for (int i = 1; i <= 9; i++) {

		if (s[i] == 1)								
			cout << "\t " << s[i] + i - 1;
		else if (s[i] == 2) // S2 are the selected squares compared to users choice
			cout << "\t " << "X ";
		else
			cout << "\t " << "O ";

		if (i == 3 || i == 6) // S3 are selected squares compared to computers choice
			cout << "\n\n\n";
	}
}

void choice(void)
{
	int correct{};

	do {
		cout << "\nEnter a number 1-9 ";
		cin >> ch; // Get user choice


		for (int i = 1; i <= 9; i++) {

			if (s[i] == 1 && ch == i) { // Check if square is chosen and if not allow user to choose
				s[i] = 2;
				correct = 1;
			}
		}

	} while (correct != 1); // Makes sure square is not already chosen


}

void compChoice(void)
{
	int correct{};

	do {
		ch = 1 + rand() % 9;
		for (int i = 1; i <= 9; i++) {

			if (s[i] == 1 && ch == i) {
				s[i] = 3;
				correct = 1;
			}
		}

	} while (correct != 1);

}