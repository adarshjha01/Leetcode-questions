class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int > mp; // to hold the elements of arr1
        for ( int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        int n=arr1.size();
        vector <int > ans; // to hold the ans array
        for ( int num: arr2){
            if(mp.find(num) != mp.end()) {
                for (int i= 0;i<mp[num];i++) ans. push_back(num);
            }
            mp.erase(num);
        }
        vector<int> rem; // to hold the remaining array
        for ( auto it : mp){
            for (int i=0;i<it.second; i++){
                rem.push_back(it.first);
            }
        }
        sort(rem.begin(), rem.end());
        ans.insert(ans.end(), rem.begin(), rem.end());
        return ans;
    }
};