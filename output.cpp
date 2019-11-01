#include "/home/kenplix/calculator/calculator.h"
#include "iostream"
#include "stdio.h"

int main()
{
	double result;
	result = Calculator::Add(3.0, 2.0);
	printf("3+2 = %f", result);
	std::cin.get();
	return 0;
}
