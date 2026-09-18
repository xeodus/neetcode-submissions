class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> set;

        for (auto& i: nums) {
            if (!set.insert(i).second) {
                return true;
            }
        }
        return false;

        /*
            So, set.insert(i) returns a std::pair<Iterator, bool>; it means the  first element (.first) is an iterator to the ith ele or the equivalent pre-existing value on the set (the vaule that just got inserted or equivalent value that already existed) and the 2nd ele (.second) is a bool. So, only if .second is true that means the element doesn't exist on the set then only it can be added and if .second is false it means the ele already exists and can't be added.
        */

    }
};