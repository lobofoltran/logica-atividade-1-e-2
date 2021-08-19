#include<iostream>

int main () {
	int numero = 0;
	
	std::cout 	<< "Digite um numero: \n";
	std::cin 	>> numero;
	
	if (numero % 2 == 0) {
		std::cout << "Numero par";
	} else if (numero) {
		std::cout << "Numero impar";
	}
	
	return 0;
}
