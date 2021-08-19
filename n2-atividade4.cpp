#include<iostream>

int main () {
	
	float c = 0;
	float k = 0;
	
	std::cout << "Digite a temperatura em Celsius: \n";
	std::cin >> c;
	
	// formula
	k = ( c + 273.15 );
	
	std::cout << "Temperatura convertida: " << k;

	return 0;
}
