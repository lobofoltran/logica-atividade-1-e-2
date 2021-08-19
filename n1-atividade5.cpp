#include<iostream>

int main () {
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;
	
	std::cout << "Digite um numero 1: ";
	std::cin >> numero1;

	std::cout << "Digite um numero 2: ";
	std::cin >> numero2;
	
	numero3 = numero1 + numero2;
	
	if (numero3 >= 20) {
		std::cout << numero3 + 8;
	} else if (numero3 < 20) {
		std::cout << numero3 - 5;
	}
	
	return 0;
}
