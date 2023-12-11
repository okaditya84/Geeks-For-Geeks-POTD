#include <bits/stdc++.h>
using namespace std;

void number_printing_reverse(int n){
    if (n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    number_printing_reverse(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    number_printing_reverse(n);
}
