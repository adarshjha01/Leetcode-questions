class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long sum=0;
        int n=skill.size();
        int i=0, j=n-1;
        sum=skill[i]+skill[j];
        long long ans = skill[i]*skill[j];
        i++;
        j--;

        while(i<j){
            int temp = skill[i]+skill[j];
            
            if(temp!=sum){
                return -1;
            }

            ans += skill[i]*skill[j];
            i++;
            j--;
        }

        return ans;
    }
};