/// Problem link: https://leetcode.com/problems/length-of-last-word/description/?envType=daily-question&envId=2024-04-01

#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int count = 0;
    bool flag = false;
    for(int pos = s.size()-1; pos >= 0; pos--)
    {
        if (s[pos]!=' ')
        {
            count++;
            flag = true;
        }
        else if(s[pos] == ' ' && flag == true)
        {
            break;
        }
        
    }
    return count;
}

int main()
{
    // string s = "Hello World";
    string s = "   fly me   to   the moon  ";
    cout<<lengthOfLastWord(s)<<endl;
    return 0;
}

/*
    liner time compelxity: O(N)
    Space complexity: O(1)


    cn = 0, f = false

    s =    fly me   to   the moon  
        (3)                      (2)

    i = n-1 to 0:
        if s[i] == ' ' and f = true:
            break:
        else:
            cn++, f = true

    i= 27, cn = 0, f = false:
        s[i] = ' '
            pass:
    
    i= 26, cn = 0, f = false
        s[i] = ' '
            pass

    i= 25, cn = 0, f = false
        go to else:
            cn += 1
            f = true:

    i= 24, cn = 1, f = true
        go to else:
            cn = 2
            f = true:
    
    i= 23, cn = 2, f = true:
        go to else:
            cn = 3
            f = true:
    
    i = 22, cn = 3, f = true
        go to else:
            cn = 4
            f = true
    
    i = 21, cn = 4, f = true
        if case:
            if s[i] == ' ' && f = true:
                break:

*/