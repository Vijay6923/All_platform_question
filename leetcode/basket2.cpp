class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();
        int basketIndex = 0;
        int unplaced = 0;
        for (int i = 0; i < n; ++i) {
            while (basketIndex < m && baskets[basketIndex] < fruits[i]) {
                basketIndex++; 
            }
            if (basketIndex == m) {
                unplaced++; 
            } else {
                basketIndex++;
            }
        }
        
        return unplaced;
            
    }
};