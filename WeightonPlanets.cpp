// This will convert your weight on earth to each corresponding planet.
#include <iostream>


int main() {

 
  double weight;

  int x;

 

  std::cout << "Please enter your weight here on earth: \n";

  std::cin >> weight;

 

  // 7 planet options to choose from

 

  std::cout << "\n Here are some planet options to choose from:\n\n";

 

  std::cout << " 1. Mercury   2. Venus  3. Mars  4. Jupiter\n";

  std::cout << " 5. Saturn   6. Uranus  7. Neptune\n";

 

  std::cout << "\nWhich Planet are you visiting? ";

  std::cin >> x;

 

  if (x == 1){

 

    weight = weight * 0.38;

 

  } else if(x == 2){

 

    weight = weight * 0.91;

 

  } else if (x ==3){

 

    weight = weight * 0.38;

 

  } else if (x == 4){

 

    weight = weight * 2.34;

 

  } else if (x == 5){

 

    weight = weight * 1.06;

 

  } else if (x == 6){

 

    weight = weight * 0.92;

 

  } else if (x == 7){

 

    weight = weight * 1.19;

 

  }

 

  std::cout << "\n Your weight: " << weight << "\n";

}
