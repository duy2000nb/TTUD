#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <algorithm>

using namespace std;

const int MAX = 1000;

int demSoLanXuatHienTrongDayTangDan(int *first, int *last, int k){
	int c = 0;
	int *i = first;
		
	while(i != last){
		if(*i > k){
			return c;
		} 
		if(*i == k){
			cout << *i << " ";
			c++;
		}
		i++;
	}
	return c;
}

void sinhDay(int arr[], int n){
	srand(time(0));
	for(int i = 0; i < n; i++){
		arr[i] = rand() % 50 + 1;
	}
	sort(arr, arr+n);
	for(int i = 0; i < n; i++){
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
	int n = 20;
	sinhDay(a, n);
	
	int k;
	cout << "K = ";
	cin >> k;
	
	int temp = 0;
	int count = 0;
	
	for(int i = 0; i < n; i++){
		temp = a[i] + k;
		cout << a[i] << ": ";
		count += demSoLanXuatHienTrongDayTangDan(a+i+1, a+n, temp);
		cout << endl;
	}
	
	cout << count;
	return 0;
}
