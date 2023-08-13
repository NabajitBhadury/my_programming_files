#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length() - 1;
        while(st < e)
        {
            if((s[st] < 'a' || s[st] > 'z') && (s[st] < 'A' || s[st] > 'Z') && (s[st] < '0' || s[st] > '9'))
            {
                continue;
            }
            if(s[st] >= 65 && s[st] < 90)
            {
                s[st] = s[st] - 65 + 97;
            }
            if(s[st] != s[e])
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}