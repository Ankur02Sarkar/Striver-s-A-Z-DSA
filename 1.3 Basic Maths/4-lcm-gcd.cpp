// Given two numbers A and B. The task is to find out their LCM and GCD.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long hcf(long long a, long long b){
         return b == 0 ? a : hcf(b, a % b);  
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        int X = hcf(A,B);
        return {A*B/X, X};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends