#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int T;
    cin >> T;
    while (T--)
    {
        cin.ignore();
        getline(cin, s);

        stringstream buf(s);
        string doc;
        bool bandera = false;
        while(buf>>doc){
            if(doc=="not"){
                bandera = true;
                break;
            }
        }
        if(bandera)
            printf("Real Fanc\n");
        else
            printf("regularly fancy\n");

    }
    return 0;
}