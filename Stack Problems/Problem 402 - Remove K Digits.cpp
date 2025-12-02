// Given string num representing a non-negative integer num, and an integer k, 

//return the smallest possible integer after removing k digits from num.

class Solution {
public:
    string removeKdigits(string num, int k) {
        
        stack<char>s;
        int i=0;

        while (i<num.size())
        {
            if(!s.empty()) 
            {
                while(!s.empty() && num[i]<s.top() && k>0)
                {
                    s.pop();
                   k--;
                }  
            }
            s.push(num[i]);
            i++;
        }
        while(k>0 && !s.empty())
        {
            s.pop();
            k--;
        }
        if(!s.empty())
        {
        string ans(s.size(),0);
        int j=s.size()-1;
        while(!s.empty())
        {
            ans[j]=s.top();
            j--;
            s.pop();
        }
        regex pattern("^0+(?!$)"); 
        ans = regex_replace(ans, pattern, "");
        return ans;
        }
        else
        return "0";
    }
};
