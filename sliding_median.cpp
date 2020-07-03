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
#define For(i,n) for(int i=0;i<n;i++)
#define pie =3.14159265358979323846264338327950;
const int mod= 1e9+7;

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n,k;
	cin>>n>>k;
	int ar[n];
	For(i,n) cin>>ar[i];
	multiset<int> mn;
	multiset<int> mx;
	vector<int> ans;
	for(int i=0;i<n;i++){
		//for(int j:mx){
			//cout<<j<<" ";
		//}
		//nl;
		//for(int j:mn){
			//cout<<j<<" ";
		//}
		//nl;
		if(i<k){
			if(mx.size()==0){
				mx.insert(ar[i]);
			}
			else if(mn.size()==0){
				if(*(--mx.end())>ar[i]){
					int t= *mx.rbegin();
					mx.clear();
					mx.insert(ar[i]);
					mn.insert(t);
				}
				else{
					mn.insert(ar[i]);
				}
			}
			else{
				if(mx.size()>mn.size()){
					if(*(--mx.end())>ar[i]){
						int t= *(--(mx.end()));
						mx.erase(--mx.end());
						mn.insert(t);
						mx.insert(ar[i]);
					}
					else{
						mn.insert(ar[i]);
					}
				}
				else if(mx.size()<mn.size()){
					if(*(mn.begin())<ar[i]){
						int t= *(mn.begin());
						mn.erase(mn.begin());
						mx.insert(t);
						mn.insert(ar[i]);
					}
					else{
						mx.insert(ar[i]);
					}
				}
				else{
					if(*(--mx.end())>ar[i]){
						mx.insert(ar[i]);
					}
					else{
						mn.insert(ar[i]);
					}
				}
			}
		}
		else{
			if(mn.size()>mx.size()){
				ans.pb(*(mn.begin()));
			}
			else{
				ans.pb(*(--mx.end()));
			}
			if(mx.size()>mn.size()){
				if(*(--mx.end())>ar[i]){
					int t= *(--(mx.end()));
					mn.insert(t);
					mx.insert(ar[i]);
					mx.erase(--mx.end());
				}
				else{
					mn.insert(ar[i]);
				}
			}
			else if(mx.size()<mn.size()){
				if(*(mn.begin())<ar[i]){
					int t= *(mn.begin());
					mx.insert(t);
					mn.insert(ar[i]);
					mn.erase(mn.begin());
				}
				else{
					mx.insert(ar[i]);
				}
			}
			else{
				if(*(--mx.end())>ar[i]){
					mx.insert(ar[i]);
				}
				else{
					mn.insert(ar[i]);
				}
			}
			//for(int j:mx){
			//cout<<j<<" ";
			//}
			//nl;
			//for(int j:mn){
				//cout<<j<<" ";
			//}
			//nl;
			int t= ar[i-k];
			if(t>*(--mx.end())){
				auto x= mn.find(t);
				mn.erase(x);
				if(mx.size()-mn.size()==2){
					mn.insert(*(--mx.end()));
					mx.erase(--mx.end());
				}
			}
			else{
				auto x=mx.find(t);
				mx.erase(x);
				if(mn.size()-mx.size() ==2){
					mx.insert(*(mn.begin()));
					mn.erase(mn.begin());
				}
			}
		}
	}
	if(mn.size()>mx.size()){
		ans.pb(*(mn.begin()));
	}
	else{
		ans.pb(*(--mx.end()));
	}
	for(int i=0;i<(int)ans.size();i++) cout<<ans[i]<<" ";
	return 0;
}
