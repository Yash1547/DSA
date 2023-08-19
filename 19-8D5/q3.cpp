//code to find duplicates in O(n) time
#include <iostream>
using namespace std;

int main() {
    int a[]={0,4,3,2,7,8,2,3,1};
    int n=9;
    for(int i=0;i<n;i++){
        a[a[i]%n]=a[a[i]%n]+n;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=n*2){
            cout<<i<<" ";
        }
    }
    return 0;
}