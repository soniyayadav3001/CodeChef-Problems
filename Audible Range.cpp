//Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUDIBLE

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
int t , x;
cin>>t;
while(t--){
    cin>>x;
    if(x>=67&&x<=45000){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
