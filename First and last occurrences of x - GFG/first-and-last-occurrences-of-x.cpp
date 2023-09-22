//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n, int x) {
    vector<int> result(2, -1); // Initialize result with -1, indicating not found initially.
    long long left = 0;
    long long right = n - 1;

    // Binary search for the first occurrence of x.
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            result[0] = mid;
            right = mid - 1; // Search for the first occurrence in the left half.
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Reset left and right for the next binary search.
    left = 0;
    right = n - 1;

    // Binary search for the last occurrence of x.
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            result[1] = mid;
            left = mid + 1; // Search for the last occurrence in the right half.
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends