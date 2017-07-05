#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

double factorial(double x)
{
	if (x == 0)
		return 1.0;
	return x*factorial(x-1);
}

float generateE()
{
	// using the taylor series for the calculation of 'e'
	float e_fact_sum = 0.0;
	for (double i = 0; i < 10000; i++)
		e_fact_sum += 1/factorial(i);
	std::cout << "The returned value is : " << e_fact_sum << "\n";
	return e_fact_sum;
}

// Have to find a faster way of generating 'e'
int main()
{
	std::ostringstream ss;
	std::cout << "Testing for generateE\n";	
	float generated_e = 0;
	generated_e = generateE();
	std::cout << "The value of the mathematical constant 'e' is : " << generated_e << "\n";
	ss << generated_e;
	std::string e_string = ss.str();
	std::cout << "The string representation of the number is : " << e_string << "\n";	
	return 0;
}
