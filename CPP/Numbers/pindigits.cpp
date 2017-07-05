#include <iostream>
const std::string PI = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

// the trivial solution
void numberPiDigits() 
{
    int num_pi_digits;
	std::cout << "\nEnter the number of digits you want to calculate PI to? : ";
	std::cin >> num_pi_digits;
	if (num_pi_digits <= 0 || num_pi_digits > 100)
	{	
		std::cout << "Cannot display PI to required precision. Resorting to default.\n";
		num_pi_digits = 4;	
	}
	std::cout << "The value of PI is : " << PI.substr(0, num_pi_digits+2) << "\n";
}

int main()
{
	numberPiDigits();
	return 0;
}

