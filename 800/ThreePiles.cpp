// Problem: Three Piles(Codeforces Round 1134 (Div. 4))
// Platform: Codeforces
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
bool solve(int a,int b, int c){
    if(a==b&&b==c){
        return false;
    }else if(b-a == 1 && c-b == 1){
        return true;
    }
    return false;
}
int main(){
    int t;//no of testcases 
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(solve(a,b,c)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}