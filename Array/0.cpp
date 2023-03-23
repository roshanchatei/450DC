#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int j = arr.size() - 1;
	int i = m + 1;

	while(i < j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}
}

int main(){
    
    return 0;
}