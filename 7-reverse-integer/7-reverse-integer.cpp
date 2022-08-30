class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN)
            return 0;
        int len = 0;
        int tmp = x;
        while(tmp){
            tmp /= 10;
            len++;
        }
        tmp = x;
        long long int rev = 0;
        while(tmp){
            int dig = tmp%10;
            rev = rev + dig*pow(10, len-1);
            if(rev>INT_MAX || rev<INT_MIN)
                return 0;
            len--;
            tmp = tmp/10;
        }
        return rev;
    }
};