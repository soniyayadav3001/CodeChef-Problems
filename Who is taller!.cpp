//Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TALLER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
int x , y;
cin>>x>>y;
if(x>y){
    cout<<"A"<<endl;
}  
else if(y>x){
    cout<<"B"<<endl;
}
else{
    cout<<"Invalid case"<<endl;
}
}
}
