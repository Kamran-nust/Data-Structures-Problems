// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. 
// (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int second=0;
        if(s.length()==0)
        {
            return true;
        }
        for (int i=0; i<t.length() && second<s.length(); i++)
        {
            if(t[i]==s[second])
            {
                second++;
            }
            if(second==s.length())
            {
                return true;
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         stack<char>st;
//         int j=s.length()-1;

//         for (int i=0; i<t.length();i++)
//         {
//             st.push(t[i]);
//         }
//         while (!st.empty() && j>=0)
//         {
//             if(st.top()!=s[j])
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.pop();
//                 j--;
//             }
//         }
//         if(j==-1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };



