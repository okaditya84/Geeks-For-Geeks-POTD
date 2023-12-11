#include <bits/stdc++.h>
using namespace std;

int sum_of_first_n_numbers(int n){
    int sum=0;
    if(n==1){
        sum+=n;
        return sum;

    }
    sum+=n;
    return sum+sum_of_first_n_numbers(n-1);
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The sum of first "<<n<<" numbers is: "<<sum_of_first_n_numbers(n);
}