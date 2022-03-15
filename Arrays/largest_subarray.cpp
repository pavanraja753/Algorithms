// Maximum subarry sum need to compute the maximum subarray sum

#include<iostream>
using namespace std;

// Geenrate all the subarrays and find the maximum sum

int main() {

	int n;
	cin >> n;

	int a[100];

	int maximumSum = 0;
	int currentSum=0;

	int left = -1;
	int right =-1;



	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	// Generate All subarrays
	for(int i=0; i<n; i++){
		for(int j=i; j<n;j++){

			currentSum =0;
			for(int k=i;k<=j;k++){
				currentSum += a[k];
			}
			cout << currentSum << endl;

			//Update the maximumSum if cs > maxiumSum
			if(currentSum > maximumSum){
				maximumSum = currentSum;
				left = i;
				right = j;
			}
		}
	}

	cout << "maximumSum is" <<maximumSum <<endl;

    // pring the subarry
	for(int k = left; k<=right; k++){
		cout <<a[k] << ",";
	}



}
