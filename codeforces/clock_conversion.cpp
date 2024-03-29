#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
const int M = 1e9 + 7;
#include <ext/pb_ds/tree_policy.hpp> 

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key(k)-> Number of items strictly greater than k(to convert to strictly smaller change greater to less)
//find_by_order(k)-> K'th element in the set(counting from 0)
using namespace __gnu_pbds; 

const long long INF = 1e18;
using namespace std;
struct DSU 
{
    vector<int>parent,sizz;
 
    DSU () {}
 
    DSU(int n) 
    {
        for(int i=0;i<=n;i++) parent.push_back(i);
        sizz.assign(n+1,1);
    }
    
    int find_set(int v) {
        if(parent[v] == v) return v;
        return parent[v] = find_set(parent[v]);
    }
 
    void union_set(int u,int v) {
        u = find_set(u);
        v = find_set(v);
 
        if(v == u) return;
 
        if(sizz[u] > sizz[v]) swap(u,v);
        parent[u] = v;
        sizz[v] += sizz[u];
    }
};

long long inv(long long i) 
{
  return i <= 1 ? i : M - (long long)(M/i) * inv(M % i) % M;
}

long long ncr(int n,int r)
{
   long long num=1;
   for(int i=1;i<=n;i++)
   {
      num = ((num % M) * i)%M;
   }
 
   long long den = 1;
   for(int i=1;i<=r;i++)
   den = ((den % M) * i)%M;
   
   long long den2 = 1;

   for(long long i=1;i<=n-r;i++)
   {
      den2 = ((den2 % M)*i)%M;
   }

   long long invden2 = inv(den2);
   long long ans = ((num%M)*(invden2%M))%M;
   return ans%M;
 
}
long long twodpresum(int a,int b,int c,int d,int n,int m,vector<vector<int>> &v,vector<vector<int>> &pf)
{
   return pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
}
bool binaryfun(int x,vector<int> &A,int k,int mx)
{
   
   
}
long long binExp(long long a,long long b)
{
   if(b<=0)
   return 1;
   long long g = binExp(a,b/2)%M;
   if(b&1)
   return (a*(g*g)%M)%M;
   else
   return (g*g)%M;
}
 
vector<int> primes;
void sieveEratosthenes(long long n)
{
   vector<bool> prime(n+1,1);
   for(int i=2;i*i<=n;i++)
   {
      if(prime[i]==true)
      {
         for(int j=i*i;j<=n;j+=i)
         {
            prime[j]=false;
         }
      }
   }
   for(int i=2;i<=n;i++)
   {
      if(prime[i])
      primes.push_back(i);
   }
}

bool isbalanced(string str)
{
   stack<int> st;
   for(int i=0;i<str.size();i++)
   {
      if(str[i]=='(')
      st.push(i);
      else
      {
         if(st.empty())
         return false;
         else
         st.pop();
      }
   }
   if(st.empty())
   return true;
   else
   return false;
}

vector<int> cycle;
int dist[200002];

void gen_all_str(int i,string &curr,string &s,vector<string> &st1,int k)
{
   if(curr.size()==k)
   {
      st1.push_back(curr);
      return;
   }
   
   if(i==s.size())
   return;

   gen_all_str(i+1,curr,s,st1,k);
   curr.push_back(s[i]);
   gen_all_str(i+1,curr,s,st1,k);
   curr.pop_back();
}

struct myComp 
{
    bool operator()(pair<int, int>& a, pair<int, int>& b) 
    {
        if (a.first == b.first) 
        {
            // If the first elements are equal, sort by the second element in increasing order
            return a.second > b.second;
        }
        // Otherwise, sort by the first element in decreasing order
        return a.first < b.first;
    }
};

long long table[200001][20];

void build(vector<int> data)
{
   int n = data.size();
   for(int i=0;i<n;i++)
   table[i][0] = data[i];

   for(int k=1;k<20;k++)
   {
      for(int i=0;i + (1<<k) - 1 < n;i++)
      table[i][k] = max(table[i][k-1],table[i + (1<<(k-1))][k-1]);
   }
   
   return;
}

int query(int l,int r)
{
    int w = r - l + 1;
    int p = log2(w);
    
    return max(table[l][p],table[r - (1<<p) + 1][p]);
}

long long ans = 0;

pair<int,int> dfs(int node,vector<int> adj[],int l[],int r[])
{
   long long mn1 = 1e9,mx1 = 0,mn_ans=1e9,mx_ans=0;
   for(auto it:adj[node])
   {
      pair<int,int> p1 = dfs(it,adj,l,r);
      
      if(r[node] >= p1.first);
      mx1 += p1.second*1ll;
   }
   
   if(mx1!=0)
   {
      mx1 = min(mx1,r[node]*1ll);
      mn1 = min(l[node]*1ll,mn1);
   }
   
   if(mn1>mx1)
   {
      ans++;
      return {l[node],r[node]};
   }
   
   return {mn1,mx1};

}
long long log_10(long long n)
{
   long long ans = 0;
   while(n>0)
   {
      ans++;
      n = (n/10);
   }
   return ans;
}
map<long long,long long> mp;
long long helper(long long n,long long k)
{
   if(n<=(log_10(k*1ll)))
   return 0;

   set<long long> st;

   long long temp = k;

   if(mp.find(k)!=mp.end())
   return mp[k];

   while(temp>0)
   {
      st.insert(temp%10);
      temp /= 10;
   }
   long long ans = 1e9;
   for(auto it:st)
   {
      if(it!=1 && it!=0)
      ans = min(ans,1 + helper(n,k*it));
   }

   return (mp[k] = ans);
}

vector<long long> pre(200001,0);

void calculate()
{
   long long pro = 1;
   for(long long i=1;i<=200000;i++)
   {
      pro = (pro * 2);
      pro %= M;
      pre[i] = pro;
   }
}


bool isPalindrome(string s)
{
   int i = 0,j = s.size() - 1;
   while(i<j)
   {
      if(s[i]!=s[j])
      return false;
      i++;
      j--;
   }
   return true;
}

void LPS(string s,vector<int> &lps)
{
   lps[0] = 0;
   int cnt = 0,i=1;

   while(i < s.size())
   {
      if(s[i]==s[cnt])
      {
         cnt++;
         lps[i] = cnt;
         i++;
      }
      else
      {
         if(cnt==0)
         {
            lps[i] = 0;
            i++;
            continue;
         }
         else
         {
            cnt = lps[cnt-1];
            continue;
         }
      }
   }
}

int cntSubstring(string s1,string s2)
{
   if(s2.size()==0)
   return 0;

   int n = s1.size();
   int m = s2.size();
   vector<int> lps(n);

   LPS(s1,lps);

   int ans = 0,i=0,j=0;
   while(i<m)
   {
      if(s1[j]==s2[i])
      {
         i++;
         j++;
      }
      if(j==n)
      {
         ans++;
         j = lps[j-1];
      }
      else if(i<m && s1[j]!=s2[i])
      {
         if(j==0)
         i++;
         else
         j = lps[j-1];
      }
   }
   return ans;
}


void solve(){
    string s;
    cin>>s;
    string ans = "";
    string temp = "";
    temp += s[0];
    temp += s[1];

    int n = stoi(temp);
     
    if(n==0){
        ans = "12:"+s.substr(3,5)+" AM";
    }
    else if(n<=12){
        if(n<12){
            ans = s + " AM";
        }else{
            ans = s + " PM";
        }
    }else{
        n -= 12;
        if(n<10){
            ans = "0" + to_string(n)+":"+s.substr(3,5)+" PM";
        }else{
            ans = to_string(n)+":"+s.substr(3,5)+" PM";
        }
    }

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}