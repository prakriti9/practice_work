#include <bits/stdc++.h>
using namespace std;

int maximum(int ar[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}
void Countsort(int ar[], int n)
{
    int max = maximum(ar, n);

    int count[max + 1];

    memset(count, 0, sizeof(count));


    for (int i = 0; i < max; i++)
    {
        count[ar[i]] = count[ar[i]] + 1;
    }
    int i =0, j = 0;
    while(i<=max)
    {
        if(count[i] > 0)
        {
            ar[j] = i;
            j++;
            count[i]--;
        }
        else
        i++;
    }
}
int main()
{
    int ar[] = {0, 23, 14, 12, 9};
    int n = sizeof(ar) / sizeof(ar[0]);
    Countsort(ar, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}