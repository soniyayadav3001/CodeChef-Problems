//Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t , x , y;
cin>>t;
while(t--){
    cin>>x>>y;
    if(y>=x){
        cout<<"0"<<endl;
    }
    else{
        cout<<x-y<<endl;
    }
}
}
