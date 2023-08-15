//Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[],int n){
    int max=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum>max){
                max = sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
}

int main()
{
    int n;
    cin>>n;    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    cout << maxSubarray(a,n);
}