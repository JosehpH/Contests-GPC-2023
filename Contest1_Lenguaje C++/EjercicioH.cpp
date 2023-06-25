#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string usuario;
    set<char> letras;
    cin >> usuario;
    for (char &c : usuario)
        letras.insert(c);
    printf(letras.size() % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!");
}