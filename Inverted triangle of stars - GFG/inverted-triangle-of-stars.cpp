//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   vector<string> invIsoTriangle(int N) {
        // code here
        vector<string >ans;
        int cnt=2;
        for(int i=0;i<N;i++){
            string a;
            for(int j=1;j<=i;j++){
                a+=" ";
            }
            for(int j=2*N-cnt-i;j>=0;j--){
                a+="*";
            }
            cnt++;
            ans.push_back(a);
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.invIsoTriangle(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends