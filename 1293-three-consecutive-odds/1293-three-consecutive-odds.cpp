class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int first=0;
        int second=0;
        int third=0;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            first=arr[i]%2;
            second=arr[i+1]%2;
            third=arr[i+2]%2;
            if(first==1 && second ==1 && third==1) return true;
        }
        return false;
    }
};