#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    for(int i=0; i<s.size();i++)
    {
        cout << int(s[i])<<endl;
    }
    for(int i: s)
    {
        cout << i << endl;
    }
    return 0;
}