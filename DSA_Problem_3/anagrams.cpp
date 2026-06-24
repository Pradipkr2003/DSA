/*
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.
An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.
Example 1:
Input: s = "racecar", t = "carrace"
Output: true
=================================================================================================================
*/

#include<iostream>
#include<string>
using namespace std;

bool SameString(string a, string b)
{
    if(a.length() == b.length())
    {
        for(int i=0; i<a.length(); i++)
        {
            bool found = false;
            for(int j=0; j<b.length();j++)
            {
                if(a[i] == b[j])
                {
                    b[j] = '*'; // we mark because in next process same element again not check.
                    found = true;
                    break;
                }
            }
            if(found == false)
            {
                return false;
            }
        }
        return true;
    }
    else 
    {
        return false;
    }
};

int main()
{
    string a,b;
    cout<<"Enter First String :- ";
    cin>>a; // getline(cin,a);
    cout<<"Enter Second String :- ";
    cin>>b; // getline(cin,b);

    bool ans = SameString(a,b);
    cout<<boolalpha<<ans<<endl;

    return 0;
}
