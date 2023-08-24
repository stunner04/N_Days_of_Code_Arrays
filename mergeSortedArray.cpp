#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> v;
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            v.push_back(arr1[i++]);
        }
        else
        {
            v.push_back(arr2[j++]);
        }
    }
    while (i < n)
    {
        v.push_back(arr1[i++]);
    }
    while (j < n)
    {
        v.push_back(arr2[j++]);
    }
    for (int i : v)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i=0; i < n; i++)
    {
        int x; cin>>x;
        cin >> arr1.push_back(x);
    }
    for (int j=0; j < m; j++)
    {
        int y; cin>>y;
        cin >> arr2.push_back(y);
    }
    mergeSortedArray(arr1, n, arr2, m);
}