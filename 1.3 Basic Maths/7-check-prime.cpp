// For a given number N check if it is prime or not. A prime number is a number 
// which is only divisible by 1 and itself.
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        if(N <= 1) return 0;
        for(int i = 2 ; i <= sqrt(N) ; i++){
            /* we can check till √n because a larger factor of n must be a multiple
            of a smaller factor that has been already checked */
            if(N%i == 0) return 0;
        }
        return 1;
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends