// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
unordered_map<char,int> freq;

        for (int i=0; i<magazine.length(); i++)
        {
            freq[magazine[i]]++;
        }
        for (int i=0; i<ransomNote.length(); i++)
        {
            freq[ransomNote[i]]--;
            if(freq[ransomNote[i]]<0)
            {
                return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         unordered_map<char,int>m;
//         unordered_map<char,int>r;
//         for (int i=0; i<magazine.length(); i++)
//         {
//             if(m.find(magazine[i])==m.end())
//             {
//             m[magazine[i]]=1;
//             }
//             else
//             {
//                 m[magazine[i]]++;
//             }
//         }
//         for (int i=0; i<ransomNote.length(); i++)
//         {
//             if(m.find(ransomNote[i])==m.end())
//             {
//                 return false;
//             }
//             else
//             {
//                 if(r.find(ransomNote[i])==r.end())
//                 {
//                     r[ransomNote[i]]=1;
//                 }
//                 else
//                 {
//                     r[ransomNote[i]]++;
//                 }
//                 if(r[ransomNote[i]]>m[ransomNote[i]])
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };
