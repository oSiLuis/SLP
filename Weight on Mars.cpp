//This will calculate weight on Mars

#include <iostream>

int main() {
	double mars = 3.73 / 9.81;
	double weight;

	std::cout << "Please enter your weight in lbs:";
	std::cin >> weight;
	std::cout << (weight * mars) << "\n";

	return 0;
}
