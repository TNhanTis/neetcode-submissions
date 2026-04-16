class Solution {
public:
    bool isAnagram(string a, string b) {
    if (a.length() != b.length()) return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
    }
};
