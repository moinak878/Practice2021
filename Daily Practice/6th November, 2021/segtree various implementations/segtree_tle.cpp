#define ll long long 

struct node
{
    ll no,pref,suf,first,last;
    bool isinc;
    node()
    {
        no=suf=pref=isinc=0;
        first=last=0;
    }
    node(ll x)
    {
        no=suf=pref=isinc=1;
        first=last=x;
    }
};
 
ll n;
node t[(int)4e5+3];
 
node combine(node a,node b)
{
    node ret;
    ret.no = a.no+b.no;
    ret.pref = a.pref;
    ret.suf = b.suf;
    ret.isinc = (a.isinc && b.isinc && a.last<=b.first);
    ret.first = a.first;
    ret.last = b.last;
    if(a.last<=b.first)
    {
        ret.no+=a.suf*b.pref;
        if(a.isinc)
        ret.pref+=b.pref;
        if(b.isinc)
        ret.suf+=a.suf;
    }
    return ret;
}
 
void build() 
{
  for (ll i = n - 1; i > 0; --i) 
  t[i] = combine(t[i<<1],t[i<<1|1]);
}
 
node query(ll l, ll r) 
{
  node resl, resr;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) 
  {
    if (l&1) resl = combine(resl, t[l++]);
    if (r&1) resr = combine(t[--r], resr);
  }
  return combine(resl, resr);
}
 
void modify(ll p,ll value) 
{
  for (t[p += n] = node(value); p >>= 1; ) 
  t[p] = combine(t[p<<1], t[p<<1|1]);
}