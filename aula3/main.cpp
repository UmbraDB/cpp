#include <iostream>
#include <limits>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	int b;
	int p = 0;
	int t;
	int c;
	int media;
	cout << "Quantas notas vai avaliar?" << endl;
	for (; cin >> b <= 0 || b <= 0;){
		cout << "Tem de ser um numero positivo!!" << endl;
		cin.clear();
		cin.ignore();
	}

	int notas[b];
	for (int i = 0; i < b ; i++){
		cout << "insira a " << i+1 << "� nota" << endl;
		for (;cin >> notas[i] || notas[i] < 0 || notas[i] > 20;){
			cout << "Nota inv�lida, insira outra vez: " << endl;
			cin.clear();
			cin.ignore();
		}
	}
		int max = notas[0];
		int min = notas[0];
		int indM;
		int indm;
	for (int i = 0; i < b; i++){
		cout << i+1 << " � nota: " << notas[i] << endl;
	}
	for (int i = 0; i < b; i++){
		media += notas[i];
		if (max < notas[i]){
			max = notas[i];
			indM = i + 1;
			
		}
		if (min > notas[i]){
			min = notas[i];
			indm = i + 1;
		}
	}
	while (p >= 0 || p <=20 || !(cin.fail())){
		cout << "prentende pesquisar uma nota? (insira um valor que n�o seja uma nota para fechar)" << endl;
		cin >> p;
		for (int i = 0; i < b; i++) {
			if (p == notas[i]){
				t = i + 1;
				cout << "Nota " << p << " na " << t << "� posi��o" << endl;
				c = 1;
			}
		}
		if (c = 0){
			cout << "N�o foram encontradas correspond�ncias";
		}
	}
	
	cout << endl << "M�dia: " << media / b << endl << "M�x: " << indM << "� nota: "<< max << endl << "Min: " << indm << "� nota: "<< min;
	return 0;
}
