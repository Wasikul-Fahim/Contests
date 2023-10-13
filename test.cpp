#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t, n, a, b ;
    cin >> t;

    for (int l = 0; l < t; l++)
    {
        cin >> n;
        int nums[n], count = 0;
        cin >> a >> b;

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((a <= (nums[i] + nums[j])) && (b >= (nums[i] + nums[j])))
                {
                    count++;
                }
            }
        }
        cout << "Case " << l + 1<< ": " << count << endl;
    }

}