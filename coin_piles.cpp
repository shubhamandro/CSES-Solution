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
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(2*a-b >=0 && 2*b-a>=0 && (2*a-b)%3==0){
			cout<<"YES"<<endl;
		} 
		else cout<<"NO"<<endl;
	}
	return 0;
}
