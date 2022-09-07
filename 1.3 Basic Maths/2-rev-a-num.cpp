// Given a 32 bit number X, reverse its binary form and print the answer in decimal.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        /*
        // Approach 1
        string num = bitset<32>(X).to_string();
        reverse(num.begin(), num.end());
        return stoll(num, 0, 2);
        */
        long long res = 0;
        for(int i = 0 ; i < 32 ; i++){
            long long lsb = X & 1;
            long long reverseLsb = lsb << (31-i);
            res = res | reverseLsb;
            X = X >> 1;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends