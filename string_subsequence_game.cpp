// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    bool is(char c)
    {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        {
            return true;
        }
        return false;
    }
    set<string> allPossibleSubsequences(string s)
    {
        set<string> st;
        int n = s.size();
        for (int num = 0; num < (1 << n); num++)
        {
            string sub = "";
            for (int i = 0; i < n; i++)
            {
                if (num & (1 << i))
                {
                    sub += s[i];
                }
            }

            int k = sub.size();
            if (k >= 2 and is(sub[0]) == true and is(sub[k - 1]) == false)
            {
                st.insert(sub);
            }
        }

        return st;
    }
};