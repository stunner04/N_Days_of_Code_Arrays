#include <bits/stdc++.h>
using namespace std;

void rotateByK(int arr[], int n, int k)
{
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int newIndex = ((i + k) % n);   //imp concept
        ans[newIndex] = arr[i] ;
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
}
int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotateByK(arr, n, k);
}