#include<iostream>
#include <stdlib.h>
using namespace std;

//#define MAX 1000;
const int MAX = 1000;

void cercanos(int v[], int n, int *result, int &diff) {
	int aux = n-2;
	while(aux >=0){
		//cout << "v[" << aux << "],v[" << n-1 << "]" << endl;		//vemos como compara
		//if(abs(v[aux] - v[n-1])<diff){		//Coge los últimos
		if(abs(v[aux] - v[n-1])<=diff){			//Coge los primeros
			result[0] = v[aux];
			result[1] = v[n-1];
			diff = abs(v[aux] - v[n-1]);
		}
		aux--;
	}
	if(n-2 >= 0)
		cercanos(v,n-1,result,diff);
}

int main() {
	int v[MAX];
	int n;
	int result[2];
	int diff = 0;

	cout << "tamaño del vector: ";
	cin >> n;
	while (n >= 2 && n <= MAX) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		result[0] = v[n];			//iniciamos valores
		result[1] = v[n-1];			//
		diff = abs(v[n] - v[n-1]);	//
		cercanos(v, n, result, diff);
		cout << "Resultado: [" << result[0] <<"," << result[1] << "]"<< endl;
		cout << "Diferencia: "<< diff << endl;
		cout << "tamaño del vector: ";
		cin >> n;
	}
	return 0;
}
