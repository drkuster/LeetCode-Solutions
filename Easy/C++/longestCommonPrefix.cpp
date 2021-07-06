class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = strs.at(0).length();
        for (int i = 1; i < strs.size(); i++) {
            if (strs.at(i).length() < min)
                min = strs.at(i).length();
        }

        string lcp = "";
        bool common = true;

        for (int i = 0; i < min; i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs.at(j).at(i) != strs.at(j - 1).at(i)) {
                    common = false;
                    break;
                }
            }
            if (common)
                lcp += strs.at(0).at(i);
        }

        return lcp;
    }
};