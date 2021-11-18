#include <iostream>

using namespace std;

const int MAX = 1000;

long long int A[MAX];

long long int Fibo(int n){
	A[0] = 0;
	A[1] = 1;
	
	for(int i = 2; i <= n; i++){
		A[i] = A[i-2] + A[i-1];
	}
	
	return A[n];
}


int main(){
	int n;
	cout << "N = "; cin >> n;
	cout << Fibo(n) << endl;
	return 0;
}
