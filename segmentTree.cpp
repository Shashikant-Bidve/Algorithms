#include <bits/stdc++.h>
using namespace std;
#define ll long long

// segment array size should be max 4 times the array size
int arr[200001],seg[4*200001];

// visualize the tree and write this function first
void build(int ind,int l,int r){
  // base
  if(l == r){
    seg[ind] = arr[l];
    return;
  }
  int mid = (l + r)/2;
  build(2*ind+1,l,mid);
  build(2*ind+2,mid+1,r);
  seg[ind] = seg[2*ind+1]^seg[2*ind+2];
}

// 
int query(int ind,int low,int high,int l,int r){
  // in range
  if(low>=l && high<=r){
    return seg[ind];
  }
  // out of bounds
  if(low>r || high<l){return 0;}
  // overlap
  int mid = (low + high)/2;
  int left = query(2*ind+1,low,mid,l,r);
  int right = query(2*ind+2,mid+1,high,l,r);
  return left^right;
}

int main() {
  ll n,q;
  cin>>n>>q;
  for(int i=0;i<n;i++){cin>>arr[i];}
  build(0,0,n-1);
  while(q--){
    int l,r;
    cin>>l>>r;
    cout<<query(0,0,n-1,l-1,r-1)<<endl;
  }
  
return 0;
}

