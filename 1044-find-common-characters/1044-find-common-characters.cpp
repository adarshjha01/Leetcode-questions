class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        int n=words.size();
        for (int i =0,j=0;j<words[i].length();j++){ // mp1 will be holding the first string words[i];
            mp1[words[i][j]]++;
        }
        for (int i =1;i<n;i++){
            for ( int j=0;j<words[i].length();j++){
                if(mp1.find(words[i][j])!=mp1.end()){
                    mp2[words[i][j]]++;
                    mp1[words[i][j]]--;
                    if(mp1[words[i][j]]==0) mp1.erase(words[i][j]);
                }
            }
            mp1.clear();
            mp1.insert(mp2.begin(),mp2.end());
            mp2.clear();
        }   
        vector<string>  ans;
      for (auto it : mp1) {
            for (int i = 0; i < it.second; i++) {
                ans.push_back(string(1, it.first)); // Convert char to string before pushing
            }
        }
        return ans;

    }
};