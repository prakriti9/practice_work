#include <bits/stdc++.h>
using namespace std;
// Quick sort Method
// void rearrange(int ar[], int n)
// {
//     int j =0;
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i] < 0)
//         {
//            if(i != j)
//            {
//                swap(ar[i],ar[j]);
//            }
//            j++;
//         }

//     }
// }

// Two pointer Technique
void rearrange(int ar[], int n)
{
    int left = 0;
    int right = n-1;
    while(left <=right)
    {
        if(ar[left] < 0 && ar[right] <0)
        {
            left++;
        }
        else if(ar[left] > 0 && ar[right] <0)
        {
            // int temp = ar[left];
            // ar[left] = ar[right];
            // ar[right] = temp;
            swap(ar[left],ar[right]);
            left++;
            right--;
        }
        else if(ar[left] > 0 && ar[right] > 0)
        {
            right--;
        }
        else{
            left++;
            right--;
        }
    }
}
int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}