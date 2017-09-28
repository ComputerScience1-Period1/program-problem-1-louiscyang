/*
Louis Yang - 9/22/2017
Display Text
Create New Project & Display Text to Console
*/

#include <iostream> //gives access to cin,cout,endl,<<,>>,boolalpha,noboolalpha
#include <conio.h> //gives access to _kbhit90 and _getch() for pause()

using namespace std; //std::cin, std::cout

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

void main() {
	cout << "Hello World! I am Louis Yang from 1st period Computer Science I!" << endl; //display text
	pause(); //pause to see displayed text
}