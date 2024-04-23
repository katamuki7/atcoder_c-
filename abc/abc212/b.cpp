#include <bits/stdc++.h>
using namespace std;

int main() {
  char a[4];
	for (int i = 0; i < 4; i++)a[i] = 0;
	cin >> a;
  if (a[1] == a[2]) {
    cout << "Weak1" << endl;
  }
  //else if (a[1]+1 == a[2] || (a[1] == 9 && a[2] == 0))
    if (a[2]+1 == a[3] || (a[2] == 9 && a[3] == 0))
      if (a[3]+1 == a[4] || (a[3] == 9 && a[4] == 0))
        if (a[4]+1 == a[1] || (a[4] == 9 && a[1] == 0))
          cout << "Weak2" << endl;
  else
    cout << "Strong" <<endl;
  cout << a[0] << a[1]<< endl;
}
//muzukasiiyo!!

