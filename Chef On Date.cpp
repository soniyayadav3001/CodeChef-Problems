//Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFONDATE?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>=y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
