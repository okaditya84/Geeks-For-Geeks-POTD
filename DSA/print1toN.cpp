#include <bits/stdc++.h>
using namespace std;

void number_printing(int n){
    if (n==1){
        cout<<n<<endl;
        return;
    }
    number_printing(n-1);
    cout<<n<<endl;

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    number_printing(n);
}