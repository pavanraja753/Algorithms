// this is my first program

#include<iostream>
#include<algorithm>
using namespace std;


int main() {

	int n, key;
	cin >> n;

	int a[1000];

	for(int i =0; i<n; i++){
		cin >> a[i];
	}

	// Sort an array using sort() function
	sort(a, a+n);  // this is efficient implementation


	//printing array
	for (int i=0; i<n; i++){
		cout << a[i] << ",";
	}


}