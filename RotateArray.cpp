#include <iostream>
using namespace std;

void rotate(int ar[], int n)
{
    int i =0;
    int j = n-1;
    while(i<=j)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;

        i++;
        j--;
    }
}
int main()
{
    int ar[] = {4, 5, 1, 2};
    int n = sizeof(ar) / sizeof(ar[0]);
    rotate(ar, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}