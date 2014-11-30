#include<iostream>
#include <stdlib.h>
using namespace std;

//#define MAX 1000;
const int MAX = 10;
int evaluaPol(int v[],int n,int x, int cont = 0, int pot = 1){
	int result = 0;
	if(cont < n){
		result = v[cont]*pot + evaluaPol(v,n,x,cont+1, pot*x);	
	}
	return result;
}

int main() {
	int v[MAX];
	int n,x;

	cin >> n;
	while (n > 0 && n < MAX) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		cin >> x;
		cout << evaluaPol(v,n,x) << endl;
		cin >> n;
	}
	return 0;
}