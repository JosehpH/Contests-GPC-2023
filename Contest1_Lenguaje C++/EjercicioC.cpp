#include <bits/stdc++.h>
#define FOR(ii, n) for (int i = ii; ii < n; i++)
using namespace std;

void solve()
{
    string palabra;
    cin >> palabra;
    int contMin = 0;
    int contMay = 0;
    string min = "";
    string may = "";
    for (char &p : palabra)
    {
        if (p == toupper(p))
            contMay++;
        else
            contMin++;
        may += toupper(p);
        min += tolower(p);
    }
    if (contMin >= contMay)
        cout << min;
    else
        cout << may;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}