#include<iostream>
#include <stdlib.h>
using namespace std;


const int MAX = 100;
int posMin(int v[],int n,int pos){

	if(pos+1<n && pos-1>=0){	

		if(v[pos-1]>v[pos] && v[pos]>v[pos+1])
		{
			pos = (pos+n)/2;
			posMin(v,n,pos);
		}
		else if(v[pos-1]>v[pos] && v[pos]<v[pos+1]){
			return pos;
		}
		else if (v[pos-1]<v[pos] && v[pos]<v[pos+1]){
			pos = pos/2;
			posMin(v,n,pos);
		}
	}
	else if(pos-1<0){
			return 0;
	}
	else{
			return pos;
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
		cout << posMin(v,n,n/2) << endl;
		cin >> n;
	}
	return 0;
}