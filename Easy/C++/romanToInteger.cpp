class Solution {
public:
    map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int romanToInt(string s) {
        int num = romanNumerals.at(s.at(0));
        for (int i = 1; i < s.length(); i++) {
            num += romanNumerals.at(s.at(i));
            if (romanNumerals.at(s.at(i)) > romanNumerals.at(s.at(i - 1)))
                num -= 2 * romanNumerals.at(s.at(i - 1));
        }
        return num;
    }
};