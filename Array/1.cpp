#include <bits/stdc++.h>
using namespace std;

int sumOfMaxMin(int arr[], int n){
	int min = arr[0];
	int max = arr[0];

	for(int i = 1; i < n; i++){
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}

	return min + max;
}

int main(){
    
    return 0;
}