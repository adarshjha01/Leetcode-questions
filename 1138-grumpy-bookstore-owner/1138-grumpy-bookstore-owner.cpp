class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int initial = 0;
        int maxExtraSatisfaction = 0;
        int currentWindowSatisfaction = 0;
        
        for (int i = 0; i < customers.size(); ++i) {
            if (grumpy[i] == 0) {
                initial += customers[i];
            } else if (i < minutes) {
                currentWindowSatisfaction += customers[i];
            }
        }
        
        maxExtraSatisfaction = currentWindowSatisfaction;
        
        for (int i = minutes; i < customers.size(); ++i) {
            currentWindowSatisfaction += customers[i] * grumpy[i];
            currentWindowSatisfaction -= customers[i - minutes] * grumpy[i - minutes];
            maxExtraSatisfaction = max(maxExtraSatisfaction, currentWindowSatisfaction);
        }
        
        return initial + maxExtraSatisfaction;   
    }
};