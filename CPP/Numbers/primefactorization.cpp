#include <iostream>
#include <vector>
#include <cmath>

void find_prime_factors(int num_to_factorize)
{
	std::vector<int> prime_factors;
	while (num_to_factorize % 2 == 0)
	{
		prime_factors.push_back(2);
		num_to_factorize = num_to_factorize/2;
	}

	for (int i = 3; i <= sqrt(num_to_factorize); i+=2)
	{
		while (num_to_factorize % i == 0)
		{
			prime_factors.push_back(i);
			num_to_factorize = num_to_factorize/i;
		}	
	}

	if (num_to_factorize > 2)
	{
		prime_factors.push_back(num_to_factorize);
	}
	
	for (std::vector<int>::iterator it = prime_factors.begin(); it != prime_factors.end(); it++)
		std::cout << *it << "\n";
	std::cout << "\n";
}

int main()
{
	int num_to_factorize;
	std::cout << "\nPlease enter the number that you want to factorize : ";
	std::cin >> num_to_factorize;
	find_prime_factors(num_to_factorize);
	return 0;	 	
}
