class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length())
            return -1;
        else if (needle == "" || haystack == "")
            return 0;

        for (int i = 0; i < haystack.length(); i++) {
            if (haystack.at(i) == needle.at(0)) {
                if (haystack.size() - i >= needle.size()) {
                    if (haystack.substr(i, needle.length()) == needle) return i;
                }
                else return -1;
            }
        }

        return -1;
    }
};