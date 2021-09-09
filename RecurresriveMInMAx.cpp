#include <bits/stdc++.h>
using namespace std;

int maximum(int ar[],int n)
{
    return(n==1) ? ar[0] : max(ar[0],maximum(ar + 1,n-1));
}
int minimum(int ar[],int n)
{
    return( n == 1) ? ar[0] : min(ar[0],minimum(ar + 1,n-1));
}
int main()
{
    int ar[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(ar) / sizeof(ar[0]);
    cout<<"Maximum element: "<<maximum(ar, n)<<endl;
    cout<<"Minimum element: "<<minimum(ar, n)<<endl;

}