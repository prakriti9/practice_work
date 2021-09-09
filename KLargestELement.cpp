#include <bits/stdc++.h>
using namespace std;
int largest(int ar[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minH;
    for (int i = 0; i < n; i++)
    {
        minH.push(ar[i]);
        if (minH.size() > k)
        {
            minH.pop();
        }
    }
    return minH.top();
}
int main()
{
    int ar[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(ar) / sizeof(ar[0]);
    int k;
    cin >> k;
    cout << largest(ar, n, k);

    return 0;
}