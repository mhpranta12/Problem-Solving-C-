#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
        vector <int> v;
        int n,a;
        cout<<"Enter vector size";
        cin>>n;
        for (int i = 0; i <n; i++)
        {
            cout<<"Enter element"<<endl;
            cin>>a;
            v.push_back(a);
        }
        for(auto &p:v)
        {

            cout<<p;
        }
    return 0;
}