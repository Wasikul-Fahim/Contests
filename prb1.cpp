#include <bits/stdc++.h>
using namespace std;

int almost_prime(int *num, int factor, int size);

int main (void)
{
    int t, n, k;
    cin >> t;

    for (int l = 0; l < t; l++)
    {
        do
        {
            cin >> n;
        }while (n < 1 || n > 100000);
        int nums[n];


        do
        {
            cin >> k;
        }while (k < 1 || k > n);

        for (int i = 0; i < n; i++)
        {
           cin >> nums[i];
        }
        int count = almost_prime(nums, k, n);
        cout << "Case " << l + 1<< ": " << count << endl;
        
    }
}


int almost_prime(int *num , int factor, int size)
{
    int count = 0;
    for (int i = 0; i <= size; i++)
    {
        if (num[i] % factor == 0)
        {
            count++;
        }
    }
    if (count < size)
    {
        return count;
    }
    else
    {
        return 0;

    }

}

