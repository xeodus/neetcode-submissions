class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        std::sort(nums.begin(), nums.end());
        for (auto& i : nums) {
            if (!s.insert(i).second) { 
                /* s.insert(i) returns an pair              std::pair<Iterator,bool>; when an elemnet is inserted (Iterator ~ .first) the .second(bool) checks whether it was already inserted, if yes, the hashset rejects the element if not it accepts it. now, use your brain.*/
                return true;
            }
        }
        return false;
    }
};