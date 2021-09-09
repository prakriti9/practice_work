#include <iostream>
using namespace std;
//Selection sort
void sort(int ar[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        //int min_id = i;
        for (int j = i+1 ; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}
int main()
{
    int ar[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(ar) / sizeof(ar[0]);
    sort(ar, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
