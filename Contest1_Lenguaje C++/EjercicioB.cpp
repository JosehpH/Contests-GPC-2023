#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int N;
    int cont = 1;
    cin >> N;
    vector<int> alturas(N);
    for (int &n : alturas)
        cin >> n;

    int maximo = alturas[0];

    for (int i = 1; i < N; i++)
    {
        if (alturas[i] >= maximo)
        {
            cont++;
            maximo = max(alturas[i], maximo);
        }
    }
    cout << cont;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}