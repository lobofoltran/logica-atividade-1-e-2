#include<iostream>

int main () {
	int numero = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if (numero < 0) {
		std::cout << numero * -1;	
	} else if (numero >= 0) {
		std::cout << numero;
	}
	
	return 0;
}
