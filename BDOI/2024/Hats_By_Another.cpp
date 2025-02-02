#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
typedef long double ldl;
//#define int ll

#define endl '\n'
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second

#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

const double PI=acos(-1);
const int MOD=1000000007;

#define mem(a,n,b) for(int i=0;i<n;i++){a[i]=b;}
#define mem2d(a,n,m,b) for(int i=0;i<n;i++){for(int j=0;j<m;j++){a[i][j]=b;}}
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define fios(); ios_base::sync_with_stdio(0);cin.tie(0);
#define fraction(x); cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield);
#define file(); freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

void solve(){
    int n;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    char s[n+1];
    for(int i=1;i<=n;i++) cin>>s[i];

    int i=1,j=1;
    while(j<=n){
        if(s[j]=='1'){
            if(j==a[i]){
                cout << "J is " << j << " s[j] is " << s[j] << " a[i] is " << a[i] << endl;
                j++;
                i++;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(s[j]=='0'){
            if(j==a[i]){ 
                cout << "1 Here S[a[i]] is " << s[a[i]] <<  " and a[i] is " << a[i] << " I is " << i << " And J is " << j << endl;
                j++;
            } else {
                if(s[a[i]]=='1'){ 
                    cout << "2 Here S[a[i]] is " << s[a[i]] <<  " and a[i] is " << a[i] << " I is " << i << " And J is " << j << endl;
                    j++;
                } else{
                    cout << "3 Here S[a[i]] is " << s[a[i]] <<  " and a[i] is " << a[i] << " I is " << i << " And J is " << j << endl;
                    i++;
                    j++;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return;
}

int32_t main(){
    fios();

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        //cout<<"Case "<<tc<<": ";
        solve();
    }
    return 0;
}