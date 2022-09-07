/*
Given a positive integer N., The task is to find the value of    \sum_{i=1}^{i=n} F(i)  
where function F(i) for the number i be defined as the sum of all divisors of ‘i‘.
*/


#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int n)
    {
        long long sum = 0;
        for (int i = 1; i <= n; ++i)
            sum += (n / i) * i;
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends