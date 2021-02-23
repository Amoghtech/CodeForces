#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        int c=0,d=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            c++;
            else
            c--;

            if(c<0){
                c=0;
                d++;
            }
        }
	cout<<d<<endl;
    }
	
	return 0;
}