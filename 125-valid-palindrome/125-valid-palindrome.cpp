class Solution {
public:
    bool isPalindrome(string s) {
        stringstream str(s);
        string word;
        string ans;
        while(str>>word){
            for(char ch:word){
                //add everything except non-alnum
                 if(isdigit(ch))
                    ans+=ch;
                else if(int(ch)>=97 and int(ch)<=122)
                    ans+=ch;
                else if(int(ch)>=65 and int(ch)<=90)
                    ans+=char(int(ch)+32);
            }
        }
        
        string t=ans;
        reverse(t.begin(),t.end());
        return t==ans;
    }
};