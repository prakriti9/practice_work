#include<bits/stdc++.h>
using namespace std;
 
int kthSmallest(int arr[], int n, int k)
{
    // Build a heap of n elements: O(n) time
    priority_queue<int> maxi;
    // Do extract min (k-1) times
    for (int i = 0; i < n; i++)
    {
        maxi.push(arr[i]);
        if(maxi.size() > k)
        {
            maxi.pop();
        }

    }
    return maxi.top();
 
}
 
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}