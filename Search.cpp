//File: Search.cpp
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is the member function file for Search.

#include <iostream>
using namespace std;

#include "Search.h"



Search::Search()
{
}


Search::~Search()
{
}

void Search::Menu() {

	do {
		go = true;
		cout << "Choose an option below." << endl << "(Q)uit" << endl << "(S)earch" << endl
			<< ": ";
		cin >> option;
		cout << endl;
		switch (option) {
		case 'Q':
		case 'q':
			go = false;
			break;
		case 'S':
		case 's':
			setMinMax();
			chooseSearch();
			break;
		default:
			cout << "Your entry was invalid please try again." << endl;
			break;
			}
		
	} while (go);

}

void Search::setMinMax() {
	do {
		go2 = true;
	
	cout << "Please enter a minimum value: ";
	cin >> min;
	cout << endl << endl<< "Please enter a maximum value: ";
	cin >> max;
	cout << endl;
	if ((min < max) && (min > -1)) {
		go2 = false;
	}
	else {
		cout << " The values you entered are not sufficient please try again." << endl;
	}
	} while (go2);
}

void Search::chooseSearch() {
	do {
		go3 = true;
		cout << "Choose a search type below." << endl << "(Q)uit" << endl  << "(L)inear" << endl << "(B)inary" << endl
			<< ": ";
		cin >> option2;
		cout << endl;
		switch (option2) {
		case 'Q':
		case 'q':
			go3 = false;
			break;
		case 'L':
		case 'l':
			linearSearch();
			break;
		case 'B':
		case 'b':
			binarySearch();
			break;
		default:
			cout << "Your entry was invalid please try again." << endl;
			break;
		}
	} while (go3);
}

void Search::linearSearch() {
	setNum2Search();
	cmpCount = 0;
	for (int i = min; i <= max; i++) {
		++cmpCount;
		if (i == num2Search) {
			cout << "You found the value: " << num2Search << endl << "It took: " << cmpCount << " tries.";
			cout << endl << endl;
		}
	}
}

void Search::binarySearch() {
	tempMin = min;
	tempMax = max;
	setNum2Search();
	cmpCount = 0;
	while (tempMax >= tempMin) {

		cmpCount++;
		center = (tempMax + tempMin) / 2;
		if (center > num2Search) {
			tempMax = center + 1;
			cout << "new range: " << tempMin << " - " << tempMax << endl;
		}
		else if (center < num2Search) {
			tempMin = center - 1;
			cout << "new range: " << tempMin << " - " << tempMax << endl;
		}
		else {
			cout << "You found the value: " << num2Search << endl << "It took: " << cmpCount << " tries.";
			cout << endl << endl;
			break;
		}

	}
}

void Search::setNum2Search() {
	do {
		go4 = true;
		cout << "Enter value to find between " << min << " - " << max << ": ";
		cin >> num2Search;
		cout << endl;
		if (num2Search <= max && num2Search >= min) {
			go4 = false;
		}
		else {
			cout << "Value you entered is not within the range, please try again." << endl << endl;
		}
	} while (go4);

}
