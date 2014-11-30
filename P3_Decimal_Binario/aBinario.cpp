
#include <iostream>
using namespace std;

//DECIMAL A BINARIO

int transBinario(int n){

	int result = 0;

	if(n/2>0){
		result = n%2;
		n=n/2;		
		result = transBinario(n) * 10 + result;
	}
	else{
		result = n;
	}
	return result;
}



int main(){

	int n;

	cin >> n;

	while(n >= 0){
		cout << transBinario(n) << endl;
		cin >> n;
	}

	return 0;
}