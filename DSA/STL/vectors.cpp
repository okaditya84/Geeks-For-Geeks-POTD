#include <bits/stdc++.h>
using namespace std;

void vectors()
{
    vector<int> v;
    // insert values
    v.push_back(1);
    v.emplace_back(2);
    // print the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    // vector<pair<int,int>> v1;
    // v1.push_back({1,2});
    // cout<<v1[0].first<<" "<<v1[0].second;
    vector<int>::iterator it ;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    

}
int main()
{
    vectors();
    return 0;
}