//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO

#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
int t,x,y;
cin>>t; 
while(t--){
    cin>>x>>y;
    if(x>y){
        cout<<x<<endl;
    }
    else if(y>x){
        cout<<y<<endl;
    }
    else if(x==y){
        cout<<x<<endl;
    }
}
}
