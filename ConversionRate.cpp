// This code converts Pesos. Reais, and Soles to how much it is in US Dollars. 
#include <iostream>

 
int main() {

 

double pesos; // Peso conversion rate: 0.055

double reais; // Reais conversion rate: .20

double soles; // Soles conversion rate: .26

double dollars;

 

std::cout <<"Enter number of Columbian Pesos: ";

std::cin >> pesos;

 

std::cout <<"Enter number of Brazilian Reais: ";

std::cin >> reais;

 

std::cout <<"Enter number of Peruvian Soles: ";

std::cin >> soles;

 

dollars = 0.055 * pesos + .20 * reais + .26 * soles;  

 

std::cout << "US Dollars = $ " << dollars << "\n";

  

}
