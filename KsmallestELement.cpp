#include <iostream>
using namespace std;
void sort(int ar[], int n)   //O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int temp = ar[i], j = i-1;
        while (j >= 0 && ar[j] > temp)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = temp;
    }
}
int main()
{
    int ar[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(ar) / sizeof(ar[0]);
    sort(ar, n);
    int k;
    cin>>k;
    for (int i = 0; i < n; i++)  //O(n)
    {
        cout << ar[i] << " ";
    }
    cout<<"\nK smallest Element is: "<<ar[k-1]<<endl;
    cout<<"K Maximum Element is: "<<ar[n-k];
    return 0;
}