class Solution {
public:
    vector<int> minOperations(string boxes) {
        int temp_sum=0;
        vector<int> ans;

        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(i==j) continue;
                if(boxes[j]=='1'){
                    temp_sum+=abs(j-i);
                }
            }
            ans.push_back(temp_sum);
            temp_sum=0;
        }
        return ans;
    }
};