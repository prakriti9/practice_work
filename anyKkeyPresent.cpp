#include <bits/stdc++.h>
using namespace std;
bool kthelement(int a[], int n, int k, int x)
{
    int i;
    for (i = 0; i < n; i += k)
    {
        int j;
        for (j = 0; j < k; j++)
        {
            if (a[i + j] == x)
                break;
        }
        if (j == k)
            return false;
    }
    if (i == n)
        return true;

    //if k is not mutiple of n
    int j;
    for (j = i - k; j < n; j++)
    {
        if (a[j] == x)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, k;
    cin >> x >> k;
    //int flag = 1;

    int flag = kthelement(a, n, k, x);
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}