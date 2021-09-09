#include <bits/stdc++.h>
using namespace std;
float maximum(int ar[], int n)
{
    float max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}
float minimum(int ar[], int n)
{
    float min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    return min;
}
void RangeCoff(int ar[], int n)
{
    float min = minimum(ar, n);
    float max = maximum(ar, n);
    float range = max - min;
    cout << "Range: " << range << endl;
    float coff = (max - min) / (max + min);
    cout << "Coefficient : " << coff << endl;
}
int main()
{
    int arr[] = {15, 16, 10, 9, 6, 7, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    RangeCoff(arr, n);
    return 0;
}