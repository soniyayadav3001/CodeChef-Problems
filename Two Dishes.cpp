//Problem :https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TWODISH

#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;  
cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(b>=n && a+c>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
