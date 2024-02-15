// Chef participated in a contest and got a rank XX.

// Chef is trying to find his name in the ranklist but there are too many pages.

// Each page consists of 2525 participants. Chef wants to find the exact page number which contains his name.
// Help Chef find the page number.
// What does ceil () do in C?
// C ceil() The ceil() function computes the nearest integer greater than the argument passed.


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,t;
	cin>>t;
	while(t--)
	{
		cin>>x;
		int value = ceil((double)x/25);
		cout<<value<<endl;
	}
}
