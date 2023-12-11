#include <bits/stdc++.h>
using namespace std;

// print fibonacci series upto n terms
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);

}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
}
