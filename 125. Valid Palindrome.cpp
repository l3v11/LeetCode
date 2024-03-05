class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
                s1 += tolower(s[i]);
        }

        string s2 = s1;
        reverse(s2.begin(), s2.end());

        return s2 == s1;
    }
};