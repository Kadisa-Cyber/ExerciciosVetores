/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


int main()
{
	int numeros[5], opc;

	std::cout << "Digite sua opcao de operacao com vetores:" << std::endl;

	opc = 6;

	while(opc>5 || opc<1) {

		std::cout << "Soma de todos os numeros de um vetor (1)" << std::endl;
		std::cout << "Maior e menor numero de um vetor (2)" << std::endl;
		std::cout << "Ordenacao de vetor (3)" << std::endl;
		std::cout << "Ver quais sao os numeros primos em um vetor (4)" << std::endl;
		std::cout << "Reverter um vetor (5)" << std::endl;
		std::cin >> opc;

		if(opc>5 || opc<1) {
			system("clear");
			std::cout << "======================================" << std::endl;
			std::cout << "Digite uma opcao valida!" << std::endl;
			std::cout << "======================================" << std::endl;
		} else {
			system("clear");
			std::cout << "Preencha o vetor com 5 numeros" << std::endl;
			for(int i=0; i<5; i++) {
				std::cin >> numeros[i];
			}
		}
	}

	system("clear");

	if(opc==1) {
		int aux=0;
		for(int i=0; i<5; i++) {
			aux += numeros[i];
		}
		std::cout << "A soma de todos os numeros do vetor eh: " << aux << std::endl;
	} else if(opc==2) {
		int menor=999999, maior=-999999;
		for(int i=0; i<5; i++) {
			if(menor>numeros[i]) {
				menor=numeros[i];
			}
			if(maior<numeros[i]) {
				maior=numeros[i];
			}
		}
		std::cout << "O maior numero eh: " << maior << std::endl;
		std::cout << "O menor numero eh: " << menor << std::endl;
	} else if(opc==3) {
		int auxOrd = 0;
		for(int i=0; i<5; i++) {
			for(int j=i; j<5; j++) {
				if(numeros[i]>numeros[j]) {
					auxOrd=numeros[i];
					numeros[i] = numeros[j];
					numeros[j] = auxOrd;
				}
			}
		}
		std::cout << "O vetor ordenado eh :" << std::endl;
		for(int k=0; k<5; k++) {
			std::cout << numeros[k] << std::endl;
		}
	} else if(opc==4) {

		int verif=0, numPri=0;

		int maiorPri=-999999;
		for(int i=0; i<5; i++) {
			if(maiorPri<numeros[i]) {
				maiorPri=numeros[i];
			}
		}

		for(int i=0; i<5; i++) {
			verif=0;
			for(int j=1; j<=maiorPri; j++) {
				if(numeros[i]%j==0) {
					verif++;
				}
			}
			if(verif==2) {
				std::cout << numeros[i] << std::endl;
			}
		}

	} else {

		int control=0, vetorInv[5];
		
		std::cout << "entrou" << std::endl;
		for(int i=4; i>=0; i--) {
			for(int j=control; j<5; j++) {
                    vetorInv[i]=numeros[j];
                    break;
			}
			control++;
		}
		std::cout << "O vetor inverso eh:" << std::endl;
		for(int k=0;k<5;k++){
	       std::cout << vetorInv[k] << std::endl;
	        
	    }
	}

	return 0;
}