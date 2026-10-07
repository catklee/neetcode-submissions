class Solution {
public:
    int k = 0, p = 0;
    bool isPalindrome(string s) {
    int i = 0 + k, j = s.length() - 1 - p;  
    while (!isalnum(s[i])){
        i++;
        k++;
    }
    while (!isalnum(s[j])){
        p++;
        j--;
    }
    if (i == j || i > j){
        return true;
    }  
    if (tolower(s[i]) == tolower(s[j])){
                k++;
                p++;
                return isPalindrome(s);
            }
        else {
            return false;
        }
    }
};
