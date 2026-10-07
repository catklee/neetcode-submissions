class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> ss(s.begin(), s.end());
        multiset<char> tt(t.begin(), t.end());

        auto i = ss.begin();
        auto j = tt.begin();

        if (ss.size() != tt.size()){
            return false;
        }

        for (; i != ss.end(); i++, j++){
            if (*i != *j){
                return false;
            }
        }

        return true;
    }
};
