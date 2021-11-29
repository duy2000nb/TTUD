#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

const int MAX = 100;

int demSoLanXuatHien(int *first, int *last, int k){
	int c = 0;
	int *i = first;
		
	while(i != last){
		if(*i == k) c++;
		i++;
	}
	return c;
}

void sinhDay(int arr[], int n){
	srand(time(0));
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 50 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
}

void nhapDay(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] = "; 
		cin >> arr[i];
	}
}

int main(){
	int a[MAX];
	int n = 5;
	nhapDay(a, n);
	
	int k;
	cout << "K = ";
	cin >> k;
	
	int temp = 0;
	int count = 0;
	
	for(int i = 0; i < n; i++){
		temp = a[i] + k;
		count += demSoLanXuatHien(a+i+1, a+n, temp);
		temp = a[i] - k;
		count += demSoLanXuatHien(a+i+1, a+n, temp);
	}
	
	cout << count;
	return 0;
}
