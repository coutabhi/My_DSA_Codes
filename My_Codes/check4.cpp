#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int len;
	    cin>>len;
	    string a;
	    string b;
	    cin>>a;
	    cin>>b;
	    map<char, int>naksha1;
	    for(int i=0; i<len; i++){
	        naksha1[a[i]]++;
	    }
	    map<char, int>naksha2;
	    for(int i=0; i<len; i++){
	        naksha2[b[i]]++;
	    }
	    int lcs =0;
	    
	    for(int i=0; i<a.length(); i++){
	        int u=0;
	        int v=0;
	        if(naksha1.find(a[i])!=naksha1.end())
	            u = naksha1[a[i]];
	        if(naksha2.find(a[i])!=naksha2.end())
	            v = naksha2[a[i]];
	        lcs = max(lcs, min(u,v));
	    }
	    cout<<lcs<<endl;
	}
	return 0;
}