#include<iostream>

int main () {
	int numero = 0;
	
	std::cout 	<< "Digite um numero: \n";
	std::cin 	>> numero;
	
	if (numero > 0) {
		std::cout << "Positivo";
	} else if (numero < 0) {
		std::cout << "Negativo";
	} else {
		std::cout << "Nulo";
	}
	
	return 0;
}
