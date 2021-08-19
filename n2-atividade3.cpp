#include<iostream>

int main () {
	
	float f = 0;
	float c = 0;
	
	std::cout << "Digite a temperatura em Fahrenheit: \n";
	std::cin >> f;
	
	// formula
	c = ( f - 32 ) * 5 / 9;
	
	std::cout << "Temperatura convertida: " << c;

	return 0;
}
