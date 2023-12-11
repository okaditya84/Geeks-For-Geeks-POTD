#include <bits/stdc++.h>
using namespace std;
void name1(string name,int n){
    if (n==1){
        cout<<name<<endl;
        return;
    }
    cout<<name<<endl;
    name1(name,n-1);
}
int main(){
    cout<<"Enter how many times you need to print your name: ";
    string name;
    int n;
    cin>>n;
    cout<<"Enter your name: ";
    cin>>name;
    name1(name,n);
}
