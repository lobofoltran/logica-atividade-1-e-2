#include<iostream>

int main () {
	float tempoGasto 		= 0;
	float velocidadeMedia 		= 0;
	float distancia			= 0;
	float litrosUsados		= 0;
	
	std::cout << "Digite o tempo gasto (horas) :";
	std::cin >> tempoGasto;
	
	std::cout << "Digite a velocidade media (km/h): ";
	std::cin >> velocidadeMedia;
	
	distancia		= tempoGasto * velocidadeMedia;
	litrosUsados 	= distancia / 12;
	
	std::cout << "Velocidade Media: " << velocidadeMedia;
	std::cout << "\nTempo Gasto: " << tempoGasto;
	std::cout << "\nDistancia Percorrida: " << distancia;
	std::cout << "\nLitros Utilizados: " << litrosUsados;
	
	return 0;
}

