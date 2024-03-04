//Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , x, y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x>=1||y<=12){
            cout<<y-x<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
}
