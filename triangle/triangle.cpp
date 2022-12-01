#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char io;
	while (true){
		int a, b, c;
		cout << "insira o comprimento dos 3 lados do triangulo, a, b e c:" << endl;
		cin >> a >> b >> c;
		if (a+b>c && a+c > b && b+c > a){
			cout << "É triangulo" << endl;
		} else {
			cout << "Nao é triangulo" << endl;
		}
		cout << "Continuar? (y/n)";
		cin >> io;
		if (io != 'y' && io != 'Y'){
			break;
		}
	}
	return 0;
}
