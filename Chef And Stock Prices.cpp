//Problem:https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CSTOCK?tab=statement

#include <iostream>
using namespace std;
int main() {
	// your code goes here
int t, a, b;
	
	float s, c;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>s>>a>>b>>c;
	    
	    s = s+(s*(c/100.0));
	    
	    if(s>=a && s<=b)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
