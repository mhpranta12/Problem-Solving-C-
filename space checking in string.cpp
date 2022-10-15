#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a=" a b c d e f ";
    int count=0;
     for (int i=0; i<=a.length(); i++)
        {
            if(!isspace(a[i]))
            {
                count++;
            }
        }
        cout<<"Total Number of space : "<<count<<endl;
    return 0;
}