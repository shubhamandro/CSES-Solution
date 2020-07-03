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
	int n;
	cin>>n;
	if(n==1) {
		cout<<1<<endl;
	}
	else if(n==2 || n==3){
		cout<<"NO SOLUTION"<<endl;
	}
	else if(n==4){
		cout<<"3 1 4 2"<<endl;
	}
	else{
		for(int i=1;i<=n;i+=2){
			cout<<i<<" ";
		}
		for(int i=2;i<=n;i+=2){
			cout<<i<<" ";
		}
		nl;
	}
	return 0;
}
