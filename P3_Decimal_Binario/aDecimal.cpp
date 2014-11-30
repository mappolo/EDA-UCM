#include <iostream>
using namespace std;

//Binario a Decimal

int transDecimal(int n){

	int result = 0;

	if(n/10>0){
		result = n%10;
		n=n/10;		
		result = transDecimal(n) * 2 + result;
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
		cout << transDecimal(n) << endl;
		cin >> n;
	}

	return 0;
}