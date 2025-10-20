// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. 
// No two characters may map to the same character, but a character may map to itself.

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> check;
        unordered_map<char, int> check2;

        for (int i=0; i<s.length();i++)
        {
            
        if( (check.find(s[i])!=check.end() && check[s[i]]!=t[i])      || 
            (check2.find(t[i])!=check2.end() && check2[t[i]]!=s[i]) )
            {
                return false;
            }
        else
        {
        check[s[i]]=t[i];
        check2[t[i]]=s[i];
        }
            

            
        
        }
        // for (auto it = check.begin(); it != check.end(); ++it) {
        // cout << "Key: " << it->first << ", Value: " << it->second <<endl;
        // }
    
        //cout<<check[s[i]]<<" "<<s[i]<<endl;

        return true;
    }
};
