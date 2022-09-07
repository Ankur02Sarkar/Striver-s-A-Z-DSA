// Given an integer, check whether it is a palindrome or not.



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int rev = 0, tmp = n;
		    while(tmp != 0){
		        int dig = tmp % 10;
		        rev = rev*10 + dig;
		        tmp = tmp / 10;
		    }
		    if(rev == n)
		        return "Yes";
		    else
		        return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends