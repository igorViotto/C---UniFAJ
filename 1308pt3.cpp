#include <iostream>
using namespace std;

	int main() {
	string rg = "60.347.931-5";
	cout << "manda o RG e foto frente e verso do cartao. ";
	cin >> rg;
	if(rg.length() != 12)
		cout << "RG invalido! haha" << endl;
	else
		cout << "RG valido!, liberado para ir pra casa do caral*";
	
	
	
	return 0;
	}
