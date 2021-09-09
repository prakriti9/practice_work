#include <bits/stdc++.h>
using namespace std;
// int frequency(int a[], int n,int x)
// {
//     int count = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i] == x)
//         {
//             count++;
//         }
//     }
//     return count;
// }
unordered_map<int, int> hm;

void countFrequency(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        hm[a[i]]++;
    }
}
int frequency(int a[], int n, int x)
{
    countFrequency(a, n);
    return hm[x];
}
int main()
{
    int a[] = {1, 3, 2, 4, 2, 1, 1, 1, 1, 1};
    int x = 1;
    int n = sizeof(a) / sizeof(a[0]);
    cout << frequency(a, n, x) << endl;
    return 0;
}