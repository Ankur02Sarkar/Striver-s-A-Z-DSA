// Given a number N. Count the number of digits in N which evenly divides N.


#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int tmp = N, count = 0;
        while(tmp!=0){
            int dig = tmp%10;
            tmp = tmp/10;
            if(dig>0 and N%dig == 0)
                count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends