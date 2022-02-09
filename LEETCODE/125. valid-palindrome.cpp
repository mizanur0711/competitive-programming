class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        string s1="";
        for(int i=0;i<len;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                char c=s[i]+32;
                s1+=c;
            }
            else if((s[i]>='a' && s[i]<='z') || s[i]>='0' && s[i]<='9')
            {
                s1+=s[i];
            }
                
        }
        int front=0,last=s1.size()-1;
        while(front<last)
        {
            if(s1[front]==s1[last])
            {
                front++;
                last--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
        
};
