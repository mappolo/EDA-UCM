#include<iostream>
using namespace std;

const int MAX = 10000;

int posEqui(int v[], int n, int r = 0, int i = 0) {

	int aux1 = 0;
	int aux2 = 0;

	if(i<n){
		for(int j = 0; j < i; j++) //Suma por la izquierda
			aux1+=v[j];
		for(int y=n-1; y > i; y--) //Suma por la derecha
			aux2+=v[y];
		if(aux1 == aux2) //Comparación de las sumas
			r++;
		r = posEqui(v,n,r,i+1);
	}
	return r;
}

int main() {
	int v[MAX];
	int n;

	cin >> n;
	while (n >= 0) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		cout << posEqui(v,n) << endl;
		cin >> n;
	}
	return 0;
}