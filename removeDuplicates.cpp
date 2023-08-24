#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &nums)
{
    int ans = 0;
    for (int i=0  ;i<nums.size() ;i++)
    {
         ans = ans ^ nums[i];
         if(ans == 0){
            nums[i]=ans;
            
         }
        
    }
    for (int i : nums)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    removeDuplicates(v);

    return 0;
}