class Solution{
    public:
    vector<int> leaders(int a[], int n){
        int curr=a[n-1];
        vector<int>ans;
        ans.push_back(curr);
        for(int i=n-2; i>=0; i--){
            if(a[i]<curr)
            continue;
            // a[i]>=curr
            curr=a[i];
            ans.push_back(curr);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/0