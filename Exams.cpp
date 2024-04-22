//Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF?tab=statement

#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int students = x*y;
	    z > students/2 ? cout<<"YES" <<endl : cout <<"NO"<<endl;
	}
	return 0;
}
