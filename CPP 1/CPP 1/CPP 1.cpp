#include "stdafx.h"
#include <iostream>

float getValueFromUser()
{
	std::cout << "Please enter your income";
	float a;
	std::cin >> a;
	return a;
}


float taxPerc()
{
	std::cout << "Enter your tax percentage";
	float r;
	std::cin >> r;
	float g = r/ 100.0f;
	return g;
}


int main()
{
	float x = getValueFromUser();
	float y = taxPerc();

	std::cout << "Your amount earned is:" << std::endl;
	std::cout << x << '*' << y << '=' << x * y << std::endl;
}