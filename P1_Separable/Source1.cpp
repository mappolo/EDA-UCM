#include <iostream>
using namespace std;


bool separable(bool v[], int n){
	
	//INV: paraTodo i :  0 < i <= n 
	for(int i =1;i < n; i++){
		if(!v[i-1] && v[i])
			return false;
	}

	// POS: paraTodo i : 0 < i < n : !(!v[i-1] && v[i]); 
	return true;
}

int main(){

	bool v[10000+1];
	int n;

	cin >> n;

	while(n >= 0){

		for(int i = 0; i < n;i++){
			cin >> v[i];
		}
		cout << separable(v,n) << endl;
		cin >> n;
	}

	return 0;
}