
// Waveprint

#include<iostream>
using namespace std;

int main(){

	int a[1000][1000]= {0};
	int m,n;

	cin >>m;
	cin >>n;

	
	// Iterate over the array
   
    int val =1;

	// row wise traversal 


	for(int row=0; row <m; row++) {
		for (int col=0; col <n; col++){
			a[row][col] = val;
			val = val +1;
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	// waveprint

	for(int col=0;col <n;col++) {

		if(col%2==0){
			// even Col- Top Down
			for(int row=0; row <m; row++){
				cout <<a[row][col] << " ";
			}
		}

		else{
			
			//Bottom
			for (int row= m-1; row>=0; row--){
				cout <<a[row][col] << " ";
			}
		}
	}

}