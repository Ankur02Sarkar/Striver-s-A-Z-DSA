class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long tmp=x;
        
        while(tmp>0){
            int dig = tmp%10;
            rev = rev*10+dig;
            tmp = tmp/10;
        }
        return (rev==x);
    }
};

