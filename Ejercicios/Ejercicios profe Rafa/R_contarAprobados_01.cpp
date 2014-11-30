#include<iostream>
#include <stdlib.h>
using namespace std;

//#define MAX 1000;
const int MAX = 1000;

int contarAprobados(int v[], int n, int cont) {
	if (n >= 0){
		if (v[n] >= 5)
			cont++;
	cont = contarAprobados(v, --n, cont);
	}
	return cont;
}

int main() {
	int v[MAX];
	int n, cont = 0;

	cout << "Notas: ";
	cin >> n;
	while (n >= 0 && n <= MAX) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		cont = contarAprobados(v, --n, cont);
		cout << cont << " personas aprobadas " << endl;
		cont = 0;
		cout << "Notas: ";
		cin >> n;
	}
	return 0;
}
