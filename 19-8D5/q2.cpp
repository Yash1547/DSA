#include <iostream>
using namespace std;

int main() {
    int a[]={1,3,4,2,2};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}