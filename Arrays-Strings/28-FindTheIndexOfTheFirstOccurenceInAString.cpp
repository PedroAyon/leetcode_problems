class Solution {
public:
    int strStr(string haystack, string needle) {
        cin.tie(0);
        cout.tie(0);
        ios_base::sync_with_stdio(false);
        if (haystack.length() < needle.length()) {
            return -1;
        }
        
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        
        return -1;        
    }
};
