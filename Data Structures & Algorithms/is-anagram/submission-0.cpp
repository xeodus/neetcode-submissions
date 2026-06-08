class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<char, int> freq;

        for (auto& c: s) freq[c]++;
        for (auto& c: t) freq[c]--;
        for (auto& [ch, counter]: freq) {
            if (counter != 0) return false;
        }
        return true;
    }
};
