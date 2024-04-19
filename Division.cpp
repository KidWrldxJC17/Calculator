#include "Division.h"

double Divide::operator()(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		//Handles division by zero; 
		return -1;
	}
}
	