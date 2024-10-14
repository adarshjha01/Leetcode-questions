class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end()); // max-heap
        long long ans = 0;
        
        while(k--){
            int maxElem = pq.top();
            pq.pop();
            ans += maxElem;

            // Modify the element as per the problem's condition
            if(maxElem % 3 != 0){
                pq.push(maxElem / 3 + 1);
            } else {
                pq.push(maxElem / 3);
            }
        }

        return ans;
    }
};