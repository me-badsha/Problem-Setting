/*                 -> Bismillahir Rahmanir Rahim <-                */
/*
    Motto -   :)
*/

#include<bits/stdc++.h>
using namespace std;
//Some Hints
//Find odd and even return 1 || 0
// __builtin_parity() if x is ll use __builtin_parityll(x)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
// count how many 0 in a bynary number
#define NumOf0(x) __builtin_popcount(x)
// count how many 1 in a bynary number
#define NumOf1(x) __builtin_ctz(x)
#define   all(v)   v.begin(), v.end()
#define pi acos(-1)
typedef  long long ll;
#define MOD  1000000007
typedef  unsigned long long ull;
typedef  unsigned un;
#define Bismilla ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define In insert
#define ln "\n"
//); ... Don't Stop The Party ... :)


void solve()
{
   int n, m, k,cnt=0;
   cin>>n;
   vl a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a.begin(),a.end());
   for(int i=1;i<n-1;i++)
   {
       if(a[i-1]+a[i]>a[i+1]){
           cout << "YES\n";
           return;
       }
   }
   cout << "NO\n";
   
   
}

int main()
{
   //Bismilla;
   int t=1;
   //cin>>t;
   while(t--)solve();
}

