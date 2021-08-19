#include<iostream>

int main () {
	
	float c = 0;
	float f = 0;
	
	std::cout << "Digite a temperatura em graus celsius: \n";
	std::cin >> c;
	
	// formula
	f = ( 9 * c + 160 ) / 5;
	
	std::cout << "Temperatura convertida: " << f;
	
	return 0;
}
