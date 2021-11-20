#include <iostream>

using namespace std;

long long int F0, F1;

long long int Fibo(int n){
	F0 = 0;
	F1 = 1;
	
	if(n == 0){
		return F0;
	}
	
	if(n == 1){
		return F1;
	}
	
	long long int F2;
	for(int i = 2; i <= n; i++){
		F2 = F0 + F1;
		F0 = F1;
		F1 = F2;
	}
	
	return F2;
}

int main(){
	int n;
	cout << "N = "; cin >> n;
	cout << Fibo(n) << endl;
	return 0;
}
