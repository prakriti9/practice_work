#include <bits/stdc++.h>
using namespace std;
int minimum (int ar[],int n)
{
    int min = INT_MAX;
    for(int i= 0;i<n;i++)
    {
       if(min > ar[i])
       {
           min = ar[i];
       }
    }
    return min;
}
int maximum (int ar[],int n)
{
    int max = INT_MIN;
    for(int i= 0;i<n;i++)
    {
       if(max < ar[i])
       {
           max = ar[i];
       }
    }
    return max;
}
int main()
{
    int ar[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(ar) / sizeof(ar[0]);
    cout<<"Maximum element: "<<maximum(ar, n)<<endl;
    cout<<"Minimum element: "<<minimum(ar, n)<<endl;

}