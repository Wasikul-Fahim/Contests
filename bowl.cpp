#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main (void)
{
    int t;
    cin >> t;

    for(int l = 0; l < t; l++)
    {
        string runs;
        int wik = 0, t_run = 0, ball = 0;
        cin >> runs;

        for(int i = 0; i < runs.size(); i++)
        {
            
            if((runs[i] == 'w') || (runs[i] == 'W'))
            {
                wik++;
                ball++;
            }
            else if(runs[i] >= '0' && runs[i] <= '6')
            {
                t_run += runs[i] -'0';
                ball++;
            }
            
        }
        printf("%d.%d Overs %d Runs %d Wicket.\n", ball / 6, ball % 6, t_run, wik);
        
    }
}