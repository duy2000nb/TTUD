#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

const int K = pow(10, 9);

long long int luyThua(long int &a, long int &b){
	if(b == 1)
		return a;
		
	long long int res = a % K;
	for(int i = 2; i <= b; i++){
		res = res * a % K;
	}
	
	return res;
}

int main(){
	long int a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	clock_t begin = clock();
	cout << luyThua(a, b) << endl;
	clock_t end = clock();
	
	
	cout << "Thoi gian chay thuat toan: " << double(end - begin) << " ms" << endl;
	return 0;
}
