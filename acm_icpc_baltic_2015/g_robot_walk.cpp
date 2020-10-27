//https://codeforces.com/gym/100796/problem/G

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,m;
    string s,symbols,message;
    cin >> n >> x;
    cin >> s;
    cin >> m;
    cin >> symbols;
    message = "";
    x -= 1;
    for (int i = 0; i <= m ; i++ )
    {
        message += s[x];
        if ( symbols[i] == 'R')
        {
            x += 1;
        }
        else
        {
            x -= 1;
        }
    }
    cout << message;
    return 0;
}