//Possible words from phone digits
#include <bits/stdc++.h>
using namespace std;

vector<string> keypad ={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void possibleCombinations(string digits, vector<string>& result, int index, string res1) 
{
    if (index==digits.size()) 
	{
        result.push_back(res1);
        return;
    } 

    string possibleMoves=keypad[digits[index]-'0']; 
    for (int i=0; i<possibleMoves.size(); i++) 
	{
        res1.push_back(possibleMoves[i]);
        possibleCombinations(digits, result, index+1, res1);
        res1.pop_back();
    }

}
vector<string> possibleCombinations1(string digits) 
{
    if (digits.empty()) 
	{
        return vector<string>{};
    }
    vector<string> result;
    possibleCombinations(digits, result, 0, "");
    return result;
}
