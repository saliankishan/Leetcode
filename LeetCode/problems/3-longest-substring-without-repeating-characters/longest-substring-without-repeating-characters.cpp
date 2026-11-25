class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
    int left = 0, maxLen = 0;

    for (int i = 0;i<s.size();i++) {
        char c = s[i];
        if (last[c] >= left) {
            left = last[c] + 1;
        }
        last[c] = i;
        maxLen = max(maxLen,i-left+1);
    }
    return maxLen;
    }
};