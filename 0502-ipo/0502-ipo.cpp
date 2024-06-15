class Solution
{
public:
    int findMaximizedCapital(int k, int initialCapital, vector<int> &profits, vector<int> &capital)
    {
        ios_base::sync_with_stdio(0);
        int pi = 0;
        int numProjects = profits.size();
        // Create a vector of pairs where each pair consists of (capital required, profit)
        vector<pair<int, int>> projects;
        for (int i = 0; i < numProjects; i++)
            projects.push_back({capital[i], profits[i]});
        // Sort the projects based on the capital required in ascending order
        sort(projects.begin(), projects.end());
        // Use a max heap to keep track of the maximum profits available within the current capital
        priority_queue<int> maxProfitHeap;
        // Iterate through the number of projects we can undertake
        for (int currentProject = 0; currentProject < k; currentProject++)
        {
            // Push all projects that can be started with the current capital into the max heap
            while (pi < numProjects && projects[pi].first <= initialCapital)
            {
                maxProfitHeap.push(projects[pi].second);
                pi++;
            }
            // If no projects can be started, return the current capital
            if (maxProfitHeap.empty())
                return initialCapital;
            // Add the profit of the project with the maximum profit to the current capital
            initialCapital += maxProfitHeap.top();
            maxProfitHeap.pop();
        }
        // Return the maximized capital after undertaking up to k projects
        return initialCapital;
    }
};