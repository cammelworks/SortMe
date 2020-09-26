#include <iostream>

using namespace std;

int main(void) {
  int n;
  cout << "==== 🎲 SortMe 🎲 ====" << endl;
  cout << "How many?? " << flush;
  cin >> n;
  cout << "= Input your objects =" << endl;
  string input[n];
  for (int i = 0; i < n ; ++i) {
    cout << i + 1 << " :" << flush;
    cin >> input[0];
  }
  cout << "====== Sorting =======" << endl;

  return 0;
}
