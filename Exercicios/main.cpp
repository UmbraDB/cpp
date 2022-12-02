#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	for (int mode, a, b, c, pivot; true;) {
		cout << "Escola um modo:" << endl << "0 - Fechar Programa" << endl << "1 - Verifica Idade" << endl << "2 - Maior de 2 valores" << endl << "3 - Maior de 3 valores" << endl << "4 - Ordenar 2 valores" << endl << "5 - Ordenar 3 valores" << endl;
		cin >> mode;
		switch (mode)
		{
			case 0:
				break;
			case 1:
				cout << "Qual a sua idade?" << endl;
				cin >> a;
				if ( a < 18 ){
					cout << "Menor de idade" << endl;
				} else {
					cout << "Maior de idade" << endl;
				}
				break;
			case 2:
				cout << "Insira o valor 1" << endl;
				cin >> a;
				cout << " Insira o valor 2" << endl;
				cin >> b;
				if ( a > b ){
					cout << "O valor 1 é maior" << endl;
				} else if ( a == b ){
					cout << "Os valores são iguais" << endl;
				} else {
					cout << "O valor 2 é maior" << endl;
				}
				break;
			case 3:
				cout << "Insira o valor 1" << endl;
				cin >> a;
				cout << " Insira o valor 2" << endl;
				cin >> b;
				cout << " Insira o valor 3" << endl;
				cin >> c;
				if ( a > b ) {
					if ( a > c ){
						cout << "O valor 1 é maior" << endl;
					} else if ( a == c ){
						cout << "Os valores 1 e 3 são maiores" << endl;
					} else {
						cout << "O valor 3 é maior" << endl;
					}
				} else if ( b > c ) {
					if ( a == b ){
						cout << "Os valores 1 e 2 são maiores" << endl;
					} else {
						cout << "O valor 2 é maior" << endl;
					} 
				} else if ( b == c ) {
					if ( a == b ) {
						cout << "Os valores são todos iguais" << endl;
					} else {
						cout << "Os valores 2 e 3 são maiores" << endl;
					}
				} else {
					cout << "O valor 3 é maior" << endl;					
				}
				break;
			case 4:
				cout << "Insira o valor 1" << endl;
				cin >> a;
				cout << " Insira o valor 2" << endl;
				cin >> b;
				if ( a > b ) {
					pivot = a;
					a = b;
					b = pivot;
				}
				cout << "Valores ordenados: " << a << " "<< b << endl;
				break;
			case 5:
				cout << "Insira o valor 1" << endl;
				cin >> a;
				cout << " Insira o valor 2" << endl;
				cin >> b;
				cout << " Insira o valor 3" << endl;
				cin >> c;
				if ( a > b ) {
					pivot = a;
					a = b;
					b = pivot;
				}
				if ( b > c) {
					pivot = b;
					b = c;
					c = pivot;
				}
				if ( a > b ){
					pivot = a;
					a = b;
					b = pivot;
				}
				cout << "Valores ordenados: " << a << " "<< b << " " << c << endl;
				break;
			default:
				cout << "Opção inválida";
				break;
		}
		if (mode == 0) {
			break;
		}
	}
	return 0;
}
