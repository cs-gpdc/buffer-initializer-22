#include<iostream>
#include<unordered_set>
using namespace std;
typedef long long ll;
float getRandFloat() {
    return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}
ll getRand(ll min, ll max) {
    return min + static_cast <ll>( getRandFloat() * ( max - min + 1 ) );
}
void printUniqueSet(int n, int max) {
  unordered_set<int> s;
  while (s.size() != n) {
    int x = getRand(1, max);
    s.insert(x);
  }
  for(auto x: s)  cout << x << ' '; cout << '\n';
}
int main(void) {
    srand(time(NULL));
    ll n = getRand(1, 1e5);
    cout << n <<'\n';
    printUniqueSet(n, 1e8);
    printUniqueSet(n, 1e8);
    return 0;
}