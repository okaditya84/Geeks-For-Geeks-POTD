#include <bits/stdc++.h>
using namespace std;


void pallindrome(string s,int left, int right){
    if(left>=right){
        cout<<"The string is a pallindrome";
        return;
    }
    if(s[left]!=s[right]){
        cout<<"The string is not a pallindrome";
        return;
    }
    pallindrome(s,left+1,right-1);

}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    pallindrome(s,0,s.length()-1);
}