class Solution {
public:
    bool isVowel(string str){
        int n=str.length();
        n--;
        if(str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o' || str[0]=='u' ){
            if(str[n]=='a' || str[n]=='e' || str[n]=='i' || str[n]=='o' || str[n]=='u' ){
                return true;
            }
        }
        return false;
    };

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int n=words.size();
        vector<int> prefix(n, 0);
        for(int i=0; i<n; i++){
            prefix[i] = ( i>0 ? prefix[i-1] : 0) + (isVowel(words[i]) ? 1 : 0);
        }

        for (auto query: queries){
            int start = query[0];
            int end = query[1];
            ans.push_back(prefix[end] - (start>0 ? prefix[start-1] : 0));
        }

        return ans;
    }
};