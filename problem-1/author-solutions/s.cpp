#include<iostream>
using namespace std;
int main(void) {
    string s; getline(cin, s);
    int l = 0, u = 0;
    for(char c: s) {
      if (isupper(c)) u++;
      else if (islower(c)) l++;
    }
    cout << (u > l ? "Yes" : "No");
    return 0;
}