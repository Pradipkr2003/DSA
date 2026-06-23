/*
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.
Example 1:
Input: nums = [1, 2, 3, 3]
Output: true
======================================================================================
*/

#include<iostream>

using namespace std;

/* 
Approch :-
    I first fix 1st point value and compare another remaining all value if equal then it is directly return true other wise second point 
    fix and compare remaining element same like 1st.a it is a loop till get answer or all elements check after all check and not got equal
    then it give false.
*/

bool Duplicate(int s, int arr[])
{
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
};

int main()
{
    int s;
    cout<<"Enter the size of Array = ";
    cin>>s;

    if(s==0)
    {
        cout<<"Array is Empty"<<endl;
    }
    else if(s>1)
    {
        int arr[s];
        for(int i=0;i<s;i++)
        {
            cout<<"Enter the Element = ";
            cin>>arr[i];
        }
        bool ans =Duplicate(s, arr);
        cout<< boolalpha << ans <<endl;
    }
    else
        cout<<"It is single element, then it is always False."<<endl;
    return 0;
}
