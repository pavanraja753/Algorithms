#include<iostream>
using namespace std;



bool compare(int a, int b) {
	cout << "Comparing" << a << " and " << b << endl;
	return a >b;
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)){

	//N-1 large elements to the end

	for(int itr = 1;)
}