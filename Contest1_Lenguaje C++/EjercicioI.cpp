#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool esPalindromo(string &cad)
{
    string aux1 = "";
    string aux2 = "";
    for (char &c : cad)
        if (c <= 'Z' && c >= 'A' || c <= 'z' && c >= 'a')
            aux1 += toupper(c);
    aux2 = aux1;
    reverse(aux1.begin(), aux1.end());
    return aux1 == aux2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string cadena;
    while (getline(cin, cadena), cadena != "DONE")
    {
        if (esPalindromo(cadena))
            cout << "You won't be eaten!\n";
        else
            cout << "Uh oh..\n";
    }