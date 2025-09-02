class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> banneds(banned.begin(), banned.end());
        int count=0;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if(banneds.find(i)!=banneds.end()){
                continue;
            }
            if(i + sum > maxSum){
                break;
            }
        sum += i;
        count++;                       
        }
        return count;
    }
};
