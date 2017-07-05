#include <iostream>

void fibonacci(double num_terms)
{
	if (num_terms <= 0)
	{
		std::cout << "Cannot return the specified number of terms. Resorting to default.\n";
		std::cout << "0\n1\n";
		return;	
	}
	
	else if (num_terms == 1)
	{
		std::cout << "0\n";	
		return;
	}

	else
	{
		std::cout << "0\n1\n";
		double first_term = 0, second_term = 1, next_term;
		for (double i = 0; i < num_terms-2; i++)
		{
			next_term = first_term + second_term;
			first_term = second_term;
			second_term = next_term;
			std::cout << next_term << "\n";
		}
		return;
	}
}	

int main()
{
	double num_terms = 0;
	std::cout << "Enter the number of terms you want in the fibonacci sequence ? : ";
	std::cin >> num_terms;	
	std::cout << "Calling Fibonacci :\n";
	fibonacci(num_terms);
	return 0;
}
