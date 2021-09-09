#include <iostream>
using namespace std;
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
    while (mid <= hi) {
        switch (a[mid]) {
 
        case 0:
            swap(a[lo++], a[mid++]);
            break;
         case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}
int main()
{
    int ar[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1  };
    int n = sizeof(ar) / sizeof(int);
    sort012(ar, n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}