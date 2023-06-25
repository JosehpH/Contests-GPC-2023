#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int T, N, K, M;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int cont = 0;
        cin >> N >> K >> M;

        if (N < K * M)
            cont = 1;
        else
        {
            cont = ceil(double(N) / double(K * M));
        }
        cout << (int)cont << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}