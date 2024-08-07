class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) {
            return 0; // Not enough bars to trap water
        }

        vector<int> leftMax(n, 0); // Max height on the left side of each bar
        vector<int> rightMax(n, 0); // Max height on the right side of each bar

        // Calculate the max height on the left side of each bar
        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        // Calculate the max height on the right side of each bar
        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int trappedWater = 0;
        for (int i = 1; i < n - 1; i++) {
            int minHeight = min(leftMax[i], rightMax[i]);
            if (minHeight > height[i]) {
                trappedWater += minHeight - height[i];
            }
        }

        return trappedWater;
    }
};