#include<iostream>
#include <stdlib.h>
using namespace std;

//#define MAX 1000;
const int MAX = 1000;

int prodVector(int v[], int n, int producto) {
	if(n>1)
		producto *= v[n-1]*prodVector(v,n-1,producto);
	else if(n==1)				// Si el vector de n=0
		producto *= v[n-1];		// diese un valor 1,
	else						// estas líneas
		producto = 0;			// sobrarían
	return producto;
}

int main() {
	int v[MAX];
	int n, producto = 1;

	cout << "Num: ";
	cin >> n;
	while (n >= 0 && n <= MAX) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		producto = prodVector(v, n, producto);
		cout << "Producto resultante: "<< producto << endl;
		producto = 1;
		cout << "Num: ";
		cin >> n;
	}
	return 0;
}



