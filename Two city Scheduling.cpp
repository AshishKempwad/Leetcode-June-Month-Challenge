class Solution {
public:
    
    static bool comparator(vector<int>& a, vector<int>& b)
    {
        return a[1]-a[0] > b[1]-b[0];
    }
    
    
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int n = costs.size();
        sort(costs.begin(),costs.end(),comparator);
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(i>=n/2)
            {
                ans= ans+costs[i][1];
            }
            else
            {
                ans= ans+costs[i][0];
            }
        }
        
        return ans;
    }
};
