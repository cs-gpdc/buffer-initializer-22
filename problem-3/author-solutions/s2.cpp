#include<iostream>
#include<set>
using namespace std;
int main(void) {
    int n,x; cin>>n;
    set<int> s, v;
    for(int i=0; i<n; i++) {
      cin>>x; s.insert(x);
    }
    for(int i=0; i<n; i++) {
      cin>>x;
      if (s.count(x)) v.insert(x);
    }
    for(auto x: v) cout<<x<<' ';
    return 0;
}