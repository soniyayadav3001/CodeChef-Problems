//Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A?tab=statement

#include <iostream>
using namespace std;

int main() {
	int A;
	cin>>A;
	int B[A],even=0,odd=0;
	for(int i=0;i<A;i++)
	{
	    cin>>B[i];
	    if(B[i]%2==0)
	        even++;
	    else
	        odd++;
	}
	if(even>odd)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
	return 0;
}
