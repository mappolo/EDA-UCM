#include<iostream>
#include <stdlib.h>
using namespace std;


const int MAX = 100;

void posMin(int v[],int n,int &pos){
	//cout << "pos: " << pos << endl;
	if(n==2){
		if(v[0] < v[1])
			pos = 0;
		else
			pos = 1;
	}
	if(pos-1<0)
			pos = 0;
	else if(pos+1<n && pos-1>=0){
		if(v[pos-1]>v[pos] && v[pos]>v[pos+1])
		{
			//cout << "dcha" << endl;
			pos = (pos+n)/2;
			posMin(v,n,pos);
		}
		else if(v[pos-1]>v[pos] && v[pos]<v[pos+1]){
			//cout << "cntr" << endl;
			return;
		}
		else if (v[pos-1]<v[pos] && v[pos]<v[pos+1]){
			//cout << "izqda" << endl;
			pos = pos--;
			posMin(v,n,pos);
		}
	}
	
}

int main() {
	int v[MAX];
	int n, p;
	
	cin >> n;
	while (n > 0 && n < MAX) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		p = n/2;
		posMin(v,n,p);
		cout << p << endl;
		cin >> n;
	}
	return 0;
}