//Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM?tab=statement

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    float x,y,z,a;

    cin>>x>>y>>z;
    a=(x+y)/2;
 if(a>z)
 cout<<"yes"<<endl;

 else
 cout<<"no"<<endl;
}
	return 0;
}
