class Solution {
public:
    int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int first = 0;
        int second = 1;
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            ans = first + second;
            first = second;
            second = ans;
        }
        return ans;
    }
};