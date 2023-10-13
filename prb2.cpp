#include <bits/stdc++.h>
using namespace std;


int abs(int let);

int main (void)
{
    long int n;
    int t, a;
    cin >> t;

    for (int l = 0; l < t; l++)
    {
        do
        {
            cin >> a;
        }while (a < 2 || a > 100000);

        do
        {
            cin >> n;
        }while (n < 1 ||  n > 1000000000000);

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += abs((i % a) - (i % (a - 1)));
        }

        cout << "Case " << l + 1<< ": " << sum << endl;

        
    }
}


int abs(int let)
{
    if ( let < 0)
    {
        return let * -1;
    }
    else
    {
        return let;
    }
}