#include <iostream>
using namespace std;

bool triangular(int m[50][50], int n){
	//PRE (0 <  n <  50)
	bool derecha = true; 
	bool izquierda = true;
	
	for (int i = 0; i<n ; i++){
		for (int j = 0; j < n; j++)
		{
			if(j < i && m[i][j] != 0){ izquierda = false;}

			else if (j > i && m[i][j] != 0){ derecha = false;}

		}	
	}

	//POS  Izquierda = m[i][j], j < i || Derecha = m[i][j], j > i

	return (derecha || izquierda);

}

int main(){
	
	int m[50][50];
	int n;

	cin >> n;

	while(n > 0){

		for(int i = 0; i < n;i++){
			for (int j = 0; j < n; j++)
			{
				cin >> m[i][j];
			}
			
		}
		if (triangular(m,n))
			cout << "SI" << endl;
		else
			cout << "NO" << endl;
		cin >> n;
	}
	return 0;
}