#include <iostream>
using namespace std;
//Bubble sort
// void sort(int ar[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (ar[j] > ar[j + 1])
//             {
//                 int temp = ar[j];
//                 ar[j] = ar[j + 1];
//                 ar[j + 1] = temp;
//             }
//         }
//     }
// }

// INsertion sort
void sort(int ar[], int n)
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
    int ar[] = {0, 23, 14, 12, 9};
    int n = sizeof(ar) / sizeof(ar[0]);
    sort(ar, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}