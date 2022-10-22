
#include <string>

float numberratio(string s)
{
    int n = 0;
    for (int i = 0; i < s.size(); ++i)
        if (s[i] >= '0' && s[i] <= '9')
            ++n;
    return n / s.size();
}       