class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans = "";
        short n = word1.size(), m = word2.size(), i = 0, j = 0;
        while(i<n || j<m){
            if(i<n)
                ans += word1[i++];
            if(j<m)
                ans += word2[j++];
        }
        return ans;
    
    }
};