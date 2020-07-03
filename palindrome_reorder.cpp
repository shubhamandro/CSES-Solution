#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define nl cout<<"\n"
#define pb push_back
#define se second
#define fi first
#define int long long 
#define pi pair<int,int>
#define vpi vector<pi>
#define vvi vector<vpi>
#define pie =3.14159265358979323846264338327950;
const int mod= 1e9+7;

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	string s;
	cin>>s;
	vector<int> ar(26,0);
	for(int i=0;i<s.length();i++){
		ar[s[i]-'A']++;
	}
	int odd=0;
	int even=0;
	for(int i=0;i<26;i++){
		if(ar[i]%2) odd++;
		else even++;
	}
	if(odd>1){
		cout<<"NO SOLUTION"<<endl;
	}
	else{
		string ss="";
		int ind=-1;
		for(int i=0;i<26;i++){
			for(int j=0;j<ar[i]/2;j++)
				ss+= (char)('A'+i);
			if(ar[i]%2==1){
				ind=i;
			}	
		}
		string k=ss;
		reverse(k.begin(),k.end());
		if(ind!=-1){
			ss+=(char)('A'+ind);
		}
		ss+=k;
		cout<<ss<<endl;
	}
	return 0;
}
