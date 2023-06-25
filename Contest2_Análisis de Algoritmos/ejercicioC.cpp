#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    if((n>=6 && n%6==0) || n%2==1 && (n+1)%6 !=0)
        cout <<"yes";
    else
        cout<<"no";
    return 0;
}