#include "stdafx.h"
#include <iostream>

int getValueFromUser()
{
	std::cout << "Please Enter a number";
	int a;
	std::cin >> a;
	return a;
}


int taxPerc()
{
	std::cout << "Enter your tax percentage";
	float r;
	std::cin >> r;
	float g =  (r / 100);
	return g;
}


int main()
{
	int x = getValueFromUser();
	float y = taxPerc();

	std::cout << "Your amount earned is:" << std::endl;
	std::cout << x << '*' << y << '=' << x * y << std::endl;
}