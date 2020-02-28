//File: Search.h
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is the header file for the Search class
#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
using namespace std;

class Search {
public:
	Search();
	~Search();
	void Menu();
	void setMinMax();
	void chooseSearch();
	void linearSearch();
	void binarySearch();
	void setNum2Search();

private:
	int min = 1;
	int max = 1000000;
	int tempMin;
	int tempMax;
	int center;
	int num2Search;
	int cmpCount = 0;
	bool go = true;
	bool go2 = true;
	bool go3 = true;
	bool go4 = true;
	char option = '0';
	char option2 = '0';

};

#endif 
