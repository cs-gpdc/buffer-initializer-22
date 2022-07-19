#include<iostream>
#include<cmath>
using namespace std;
bool is_perfect_square(int n) {
    int root = round(sqrt(n));
    return n == root * root;
}
int main(void) {
    int p, q, a; cin >> p >> q;
    if (p < q) swap(p, q);
    if (is_perfect_square(p*p + q*q)) {
      // p^2 + q^2 = r^2
      a = (p * q) * 0.5;
    } else {
      int r = sqrt(p*p - q*q);
      // q^2 + r^2 = p^2
      a = (q * r) * 0.5;
    } 
    cout << a;
    return 0;
}