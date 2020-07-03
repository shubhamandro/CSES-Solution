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
	int sum= n*(n+1)/2;
	if(sum%2==1){
		cout<<"NO"<<endl;
	}
	else{
		vector<int> first;
		vector<int> second;
		int req= sum/2;
		int k=n;
		while(k){
			if(req>=k){
				req-=k;
				first.pb(k);
			}
			else{
				second.pb(k);
			}
			k--;
			//cout<<req<<endl;
		}
		cout<<"YES"<<endl;
		cout<<first.size()<<endl;
		for(int i=0;i<first.size();i++){
			cout<<first[i]<<" ";
		}
		cout<<endl;
		cout<<second.size()<<endl;
		for(int i=0;i<second.size();i++){
			cout<<second[i]<<" ";
		}
		nl;
	}
	return 0;
}
