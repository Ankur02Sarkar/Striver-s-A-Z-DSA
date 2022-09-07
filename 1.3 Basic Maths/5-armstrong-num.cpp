/*
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number 
of three digits is an integer such that the sum of the cubes of its digits is equal to the number 
itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371
*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    string armstrongNumber(int n){
        int ans = 0;
        int tmp = n;
        while(n!=0){
            ans += pow(n % 10, 3);
            n = n/10;
        }
        if(tmp==ans) return "Yes";
        else return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends