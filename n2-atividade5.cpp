#include<iostream>

int main () {
	
	float f = 0;
	float k = 0;
	
	std::cout << "Digite a temperatura em graus Fahrenheit: \n";
	std::cin >> f;
	
	// formula
	k = ( f - 32 ) * 5/9 + 273.15;
	
	std::cout << "Temperatura convertida: " << k;
	
	return 0;
}
