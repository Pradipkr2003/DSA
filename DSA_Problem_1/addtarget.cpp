/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.
Example :-

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Constraints:
    2 <= nums.length <= 10^4
    -10^9 <= nums[i] <= 10^9
    -10^9 <= target <= 10^9
    Only one valid answer exists.

===================================================================*/
#include<iostream>

using namespace std;

/* 
Approach :-
We first fix the element at the first index and add it to the subsequent elements one by one. This process runs in a loop across all the elements in the array.
Once the first fixed element has been checked against all remaining elements, we move to the second index, fix it, and repeat the process. If a matching pair is
found, we immediately return the answer. If no such pair exists after checking all combinations, we return 'Not Available'. Note that the given number must be 
formed by at least two numbers. */

void AddTarget(int e, int arr[], int Target)
{
	for(int i=0;i<e;i++)
	{
		for(int j=i+1;j<e;j++)
		{
			if(arr[i]+arr[j] == Target)
			{
				cout<<"Addition of Two Indexes are = ["<<i<<","<<j<<"]"<<endl;  
				return;
			}
		}
	}
	cout << "No any two digit addition is equal to Target Number." << endl;
};

int main()
{

	int e;
	cout<<"Enter Number of Given Elements = ";
	cin>>e;
	if(e>1)
	{
		int arr[e];
		for(int i=0;i<e;i++)
		{
			cout<<"Enter Element = ";
			cin>>arr[i];
		}
		int target;
		cout<<"Enter Target Number = ";
		cin>>target;
		AddTarget(e,arr,target);
	}
	else
		cout<<"Give minimum Array size is two and more."<<endl;
	return 0;
}

