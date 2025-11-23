// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);

        for (int i=0;i<s1.length(); i++)
        {
            //int idx= s1[i]-'a';
            freq[s1[i]-'a']++;
        }
        int windsz=s1.length();
        for (int j=0; j<s2.length(); j++)
        {
            int windidx=j;
            vector<int> freqwind(26,0);
            int idx=0;

            while(idx<windsz && windidx<s2.length())
            {
                //windowindex=;
                freqwind[s2[windidx++]-'a']++; 
                idx++;

            }
            if (freq==freqwind)
            {
                return true;
            }
        }     
        return false;
    }
};
