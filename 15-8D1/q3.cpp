//kth largest element
#include <bits/stdc++.h>
using namespace std;

int kth(int arr[],int N,int K){
	sort(arr,arr+N);
	return arr[K-1];
}

int main(){
	int arr[]={12,3,5,7,19};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k=2;
	cout<<"max"<<kth(arr, n, k);
	return 0;
}