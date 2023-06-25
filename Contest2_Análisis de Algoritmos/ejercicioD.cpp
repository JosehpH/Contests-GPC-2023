#include <iostream>
#include <vector>
using namespace std;

int v[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0, nozeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ans = max(nozeros, ans);
            nozeros = 0;
        }
        else
            nozeros++;
    }
    ans = max(nozeros, ans);
    cout << ans;
    return 0;
}