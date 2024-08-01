class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] > b[1];
    });
    int ans=0;
    for(int i=0;i<boxTypes.size();i++){
        
        if(truckSize >= boxTypes[i][0]) {
            truckSize -= boxTypes[i][0];
            ans += (boxTypes[i][1]* boxTypes[i][0]);
        }
        else {
            ans += (boxTypes[i][1]* truckSize);
            break;
        }
    }
    return ans;
    }
};