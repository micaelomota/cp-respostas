#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// your code goes here
	
	int linhaDaOperacao;
	
	cin >> linhaDaOperacao;
	
	char operacao;
	
	cin >> operacao;
	
	float matriz[12][12];
	
	for (int i=0; i<12; i++) {
		for (int j=0; j<12; j++) {
			cin >> matriz[i][j];
		}	
	}
	
	float resultado = 0.0;
	
	for (int i=0; i<12; i++) {
		if (operacao == 'S') {
			resultado += matriz[linhaDaOperacao][i];
		} else if (operacao == 'M') {
			resultado += matriz[linhaDaOperacao][i]/12;
		} 
	}
	
	cout << fixed << setprecision(1) << resultado << endl;
	
	return 0;
}
