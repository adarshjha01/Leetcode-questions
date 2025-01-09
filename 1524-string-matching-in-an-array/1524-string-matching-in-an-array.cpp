class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<int> temp(n, 0);
        vector<string> ans;
        for( int i=0; i<words.size(); i++){
            string str = words[i];
            for ( int j=0; j<words.size(); j++){
                if(i==j) continue;
                if(words[j].find(str) != string::npos){
                    temp[i]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(temp[i]) ans.push_back(words[i]);
        }
        return ans;
    }
};