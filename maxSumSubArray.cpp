#include <bits/stdc++.h>
using namespace std;

int maxSumSubArrayinKFrame(int k, vector<int> &v)
{
    int i = 0, currSum = 0, maxSum = 0;
    int j = i + k;
b
    while (j != v.size() + 1)
    {
        for (int l = i; l < j; l++)
        {
            currSum += v[l];
        }
        if (currSum < 0) // if negative
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
        currSum = 0; // currSum 0 for next frame currSum will have diff value

        i++;
        j++;
    }
    return maxSum;
}

int maxSumSubArrayinKWindow(int k, vector<int> &v)
{
    int i = 0, currSum = 0, maxSum = INT_MIN;
    int j = i + k;

    for (int l = i; l < j; l++)
    {
        currSum += v[l];
    }
    maxSum = max(currSum, maxSum);

    while (j < v.size())
    {
        currSum -= v[i];
        currSum += v[j];
        i++;
        j++;

        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main()
{

    int k;
    cin >> k;
    vector<int> v{-3, 4, 3, -2, 2, 5};

    cout << "maxSumSubArrayinKWindow : " << maxSumSubArrayinKWindow(k, v) << "\n";
    cout << "maxSumSubArrayinKFrame : " << maxSumSubArrayinKFrame(k, v);
    return 0;
}

