#include <iostream>
using namespace std;

	int main() {
		////CPF
		int i;
		string cpf = "484.782.918-22";
		////CPF
		
		////NOMES+
//		int i;
//		char nome1[] = {"igor"};
//		string nome2 = "joao guarizo viado";
//		
//		for (i=0; i<6; i++ ){
//			cout << nome1[i] << " ";
//		}
//		
//		cout << endl;
//		
//		for (i=0; i < nome2.length(); i++){
//			cout << nome2[i] << " " << endl;
//		}
//		cout << endl;
		////NOMES+
		
		////CPF - length
//		for (i=0; i<cpf.length(); i++){
//			cout << cpf[i] << endl;
//		}
		////CPF - length
		
		////CPF - substring
		cout << cpf.substr(0,2) << endl;
		cout << cpf.substr(3,3) << endl;
		cout << cpf.substr(7,3) << endl;
		cout << cpf[11] << endl;
		////CPF - substring
		
		return 0;
	}
