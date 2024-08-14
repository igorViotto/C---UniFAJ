#include <iostream>

using namespace std;

	int main() {
		///////USAR O FOR PQ É MUITO MAIS SIMPLES DO QUE ISSO
		int v[3];
		int i;
		int soma;
		float media;
//		cout << v[0] << endl;
//		cout << v[1] << endl;
//		cout << v[2] << endl;
		
		//////REAPRENDENDO FOR, 0 - 1001
//		int i;
//		for (i=0; i<1001; i++){
//			cout << i << ", " << endl << "	"<< endl;
//		}//fim do for
//		cout << endl;
		
		for (int i=0; i<3; i++){
			cout<< "qual o valor do elemento: " << i+1 << ": ";
			cin >> v[i];
		}
		
		soma =  0;
		for (i=0; i<3; i++){
			soma = soma + v[i];
		}
		
		media = soma/3;
		
		cout << endl <<  "A media dos elementos foi: " <<  media;
		
		
		
		
		
		
		
		
		
		
			
		
		return 0;
	}
