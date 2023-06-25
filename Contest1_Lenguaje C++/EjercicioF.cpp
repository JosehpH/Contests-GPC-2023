#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    bool compatible;
    int cont = 1;
    string a1, a2, a3;
    while (getline(cin, a3))
    {
        compatible = true;
        if (cont == 1)
            a1 = a3;
        else if (cont == 2)
        {

            a2 = a3;
            for (int i = 0; i < a2.length(); i += 2)
            {
                if (fabs(int(a1[i]) - int(a2[i])) == 0)
                {
                    compatible = false;
                    break;
                }
            }
            if (compatible)
                printf("Y\n");
            else
                printf("N\n");
            cont = 0;
        }
        cont++;
    }
}