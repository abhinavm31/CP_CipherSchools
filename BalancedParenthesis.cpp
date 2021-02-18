//Balanced Parenthesis
#include <bits/stdc++.h>
using namespace std;

void balancedParenthesis(vector<string>& result, int open, int close, int n, string s) 
{
    if (open<0 || close<0 || open>n || close>n || close>open) 
	{
        return;
    }
    if (open==n && close==n) 
	{
        result.push_back(s);
        return;
    }

    balancedParenthesis(result, open+1, close, n, s + "(");
    balancedParenthesis(result, open, close+1, n, s + ")");
}

vector<string> balancedParenthesis1(int n) 
{
    vector<string> result;
    balancedParenthesis(result, 0, 0, n, "");
    return result;
}
