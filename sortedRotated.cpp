#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
        { // in sortedRotated array only one time arr[i-1]>arr[i]
            count++;
        }
    }
    if (nums[nums.size() - 1] > nums[0])  
    { // for corner case checking first and last and last elements. {1,1,1}
        count++;
    }

    return (count <= 1);
}
int main()
{
}

