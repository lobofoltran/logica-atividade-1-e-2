#include<iostream>

int main () {
	int numero = 0;
	
	std::cout 	<< "Digite um numero: \n";
	std::cin 	>> numero;
	
	if (numero > 20) {
		std::cout << "Numero maior que 20";
	} else if (numero = 20) {
		std::cout << "Numero igual a 20";
	} else if (numero < 20) {
		std::cout << "Numero menor que 20";
	}
	
	return 0;
}
