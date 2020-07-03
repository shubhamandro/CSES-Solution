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
<<<<<<< HEAD
	int n,k;
	cin>>n>>k;
	int ar[n];
	For(i,n) cin>>ar[i];
	multiset<int> mn;
	multiset<int> mx;
	vector<int> ans;
	int smn=0;
	int smx=0;
	for(int i=0;i<n;i++){
		if(i<k){
			if(mx.size()==0){
				mx.insert(ar[i]);
				smx+=ar[i];
			}
			else if(mn.size()==0){
				if(*(--mx.end())>ar[i]){
					int t= *mx.rbegin();
					mx.clear();
					smx-=t;
					mx.insert(ar[i]);
					mn.insert(t);
					smx+=ar[i];
					smn+=t;
				}
				else{
					mn.insert(ar[i]);
					smn+=ar[i];
				}
			}
			else{
				if(mx.size()>mn.size()){
					if(*(--mx.end())>ar[i]){
						int t= *(--(mx.end()));
						smx-=*(--mx.end());
						mx.erase(--mx.end());
						smn+=t;
						mn.insert(t);
						smx+=ar[i];
						mx.insert(ar[i]);
					}
					else{
						smn+=ar[i];
						mn.insert(ar[i]);
					}
				}
				else if(mx.size()<mn.size()){
					if(*(mn.begin())<ar[i]){
						int t= *(mn.begin());
						smn-=*(mn.begin());
						mn.erase(mn.begin());
						smx+=t;
						mx.insert(t);
						mn.insert(ar[i]);
						smn+=ar[i];
					}
					else{
						mx.insert(ar[i]);
						smx+=ar[i];
					}
				}
				else{
					if(*(--mx.end())>ar[i]){
						mx.insert(ar[i]);
						smx+=ar[i];
					}
					else{
						mn.insert(ar[i]);
						smn+=ar[i];
					}
				}
			}
		}
		else{
			int md=0;
			if(mn.size()>mx.size()){
				md=(*(mn.begin()));
			}
			else{
				md=(*(--mx.end()));
			}
			ans.pb(smn-md*(mn.size())+md*(mx.size())-smx);
			if(mx.size()>mn.size()){
				if(*(--mx.end())>ar[i]){
					int t= *(--(mx.end()));
					smn+=t;
					mn.insert(t);
					smx+=ar[i];
					mx.insert(ar[i]);
					mx.erase(--mx.end());
					smx-=t;
				}
				else{
					mn.insert(ar[i]);
					smn+=ar[i];
				}
			}
			else if(mx.size()<mn.size()){
				if(*(mn.begin())<ar[i]){
					int t= *(mn.begin());
					smx+=t;
					mx.insert(t);
					smn+=ar[i];
					mn.insert(ar[i]);
					mn.erase(mn.begin());
					smn-=t;
				}
				else{
					mx.insert(ar[i]);
					smx+=ar[i];
				}
			}
			else{
				if(*(--mx.end())>ar[i]){
					smx+=ar[i];
					mx.insert(ar[i]);
				}
				else{
					smn+=ar[i];
					mn.insert(ar[i]);
				}
			}
			int t= ar[i-k];
			if(t>*(--mx.end())){
				auto x= mn.find(t);
				smn-=(*x);
				mn.erase(x);
				if(mx.size()-mn.size()==2){
					smn+=(*(--mx.end()));
					mn.insert(*(--mx.end()));
					smx-=(*(--mx.end()));
					mx.erase(--mx.end());
				}
			}
			else{
				auto x=mx.find(t);
				mx.erase(x);
				smx-=*x;
				if(mn.size()-mx.size() ==2){
					smx+=(*(mn.begin()));
					mx.insert(*(mn.begin()));
					smn-=(*mn.begin());
					mn.erase(mn.begin());
				}
			}
		}
	}
	int md=0;
	if(mn.size()>mx.size()){
		md=(*(mn.begin()));
	}
	else{
		md=(*(--mx.end()));
	}
	ans.pb(smn-md*(mn.size())+md*(mx.size())-smx);
	for(int i=0;i<(int)ans.size();i++) cout<<ans[i]<<" ";
=======
	
>>>>>>> a5277c5cf1aa429a5e945905ead88425e1166a94
	return 0;
}
