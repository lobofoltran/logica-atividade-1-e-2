#include<iostream>

int main () {
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;
	
	std::cout 	<< "Digite um numero 1: \n";
	std::cin 	>> numero1;
	
	std::cout 	<< "Digite um numero 2: \n";
	std::cin 	>> numero2;
	
	numero3 = ( numero1 + numero2 );
	
	if (numero3 > 10) {
		std::cout << "Numero maior que 10";
	} else if (numero3 = 10) {
		std::cout << "Numero igual a 10";
	} else if (numero3 < 10) {
		std::cout << "Numero menor que 10";
	}
	
	return 0;
}
