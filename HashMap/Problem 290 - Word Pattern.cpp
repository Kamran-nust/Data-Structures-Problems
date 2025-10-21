// Given a pattern and a string s, find if s follows the same pattern.

// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

// Each letter in pattern maps to exactly one unique word in s.
// Each unique word in s maps to exactly one letter in pattern.
// No two letters map to the same word, and no two words map to the same letter.


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char>pat;
        unordered_map<char,string>pat2;
        vector<string> words; 
        string word; 
        stringstream ss(s); 
        while (ss >> word) 
        { 
            words.push_back(word); 
        }
        if(words.size()!=pattern.length())
        {
            return false;
        }
        for (int i=0; i<pattern.length();i++)
        {
            if((pat.find(words[i])!=pat.end() && pat[words[i]]!=pattern[i]) ||
                (pat2.find(pattern[i])!=pat2.end() && pat2[pattern[i]]!= words[i])
                )
                {
                    return false;
                }
                else
                {
                    pat[words[i]]=pattern[i];
                    pat2[pattern[i]]= words[i];
                }  

        }
        return true;
    }
};
