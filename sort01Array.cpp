#include <bits/stdc++.h>
using namespace std;

void sort01(int arr[], int n)
{
    int i = 0, j = 0;
    while (i < j)
    {

        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            // arr[i] ==1 && arr[j]==0
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for (int z = 0; z < n; z++)
    {
        cout << arr[z] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sort01(arr, n);
}
    