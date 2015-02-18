#include<iostream>
#include <stdlib.h>
using namespace std;


const int MAX = 100;
int posMin(int v[],int n,int minimo,int pos){

	if(pos+1<n){	

		if(v[pos]>v[pos+1]){
			minimo = pos+1;
		}
		
		posMin(v,n,minimo,pos+1);

	}
	else{	
		return minimo;	
	}
}

int main() {
	int v[MAX];
	int n,x,minimo;

	cin >> n;
	while (n > 0 && n < MAX) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		cout << posMin(v,n,0,0) << endl;
		cin >> n;
	}
	return 0;
}