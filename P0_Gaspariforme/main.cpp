#include <iostream>
using namespace std;



int gaspariforme(int v[], int n){
	//PRE (0 <= n <= 10000)
	int p = 0, r=1;
	//INV p=0;
	for(int i = 0;i<n && r;i++){
		p += v[i]; 
		if (p<0) r=0;
	}
	if(p != 0)
		r = 0;
	return r;
	//POS ((A[0] + . . . + A[i], 0 ≤ i < n) >= 0) && (A[0] + . . . + A[i] == 0)
}

int main(){
	
	int v[10000+1];
	int n;

	cin >> n;

	while(n > 0){

		for(int i = 0; i < n;i++){
			cin >> v[i];
		}
		cout << gaspariforme(v,n) << endl;
		cin >> n;
	}
	return 0;
}
