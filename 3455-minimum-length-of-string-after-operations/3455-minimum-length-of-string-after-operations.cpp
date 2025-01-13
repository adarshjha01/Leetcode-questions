class Solution {
public:
    int minimumLength(string s) {
        unordered_map<int,int> mp;
        for(int i=0;i<s.length();i++) mp[s[i]]++;
        int ans=0;
        for(auto it: mp){
            if(it.second>=3){
                if(it.second%2==1) ans+=1;
                else ans+=2;
            }
            else ans+=it.second;
        }
        return ans;
    }
};