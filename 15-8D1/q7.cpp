//Intersection of two sorted arrays
#include <iostream>
using namespace std;

void printInter(int arr1[],int arr2[],int m,int n){
    int j=0,i=0;
    while(i<m&&j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;j++;
        }
    }
}

int main() {
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    printInter(arr1, arr2, m, n);

    return 0;
}