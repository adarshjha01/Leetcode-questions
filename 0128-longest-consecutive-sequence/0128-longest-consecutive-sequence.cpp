#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        // Handle the case of an empty vector
        if (nums.empty()) return 0;

        // Create a min-heap using priority queue
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        for (auto num : nums) {
            pq.push(num);
        }

        // Initialize variables
        int temp = pq.top();
        pq.pop();
        int count = 1; // Length of the current sequence
        int ans = 1;   // Length of the longest sequence

        // Traverse the priority queue
        while (!pq.empty()) {
            // Get the current top element
            int current = pq.top();
            pq.pop();

            // If current element is a duplicate, skip it
            if (current == temp) {
                continue;
            } 
            // If current element is consecutive, increase the count
            else if (current == temp + 1) {
                count++;
            } 
            // If not consecutive, reset the count and update the answer
            else {
                ans = std::max(ans, count);
                count = 1; // Start a new sequence
            }

            // Update the temp to the current element
            temp = current;
        }

        // Final check to update the answer in case the longest sequence ends at the last element
        ans = std::max(ans, count);

        return ans;
    }
};