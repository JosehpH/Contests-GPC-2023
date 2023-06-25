#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int pos1 = 0, posn = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 1)
                pos1 = i;
            else if (num == n)
            {
                posn = i;
            }
        }
        int resultado = (pos1 - 0) + (n - 1 - posn) - (pos1 > posn);
        cout << resultado << "\n";
    }
    return 0;
}