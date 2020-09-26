#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>
#include <thread>

using namespace std;

int main(void) {

  int n = 0;
  cout << "==== 🎲 SortMe 🎲 ====" << endl;
  cout << "How many?? " << flush;
  cin >> n;
  cout << "= Input your objects =" << endl;
  std::vector<string> input;
  for (int i = 0; i < n ; ++i) {
    cout << i + 1 << ": " << flush;
    string object;
    cin >> object;
    input.push_back(object);
  }

  cout << "====== Sorting =======" << endl;
  int counter = 22;
  string symbol = "#";
  int duration = 3000/22;
  while (counter > 0) {
    std::this_thread::sleep_for(std::chrono::milliseconds(duration));
    cout << symbol << flush;
    --counter;
  }
  cout << endl;
  cout << "======================" << endl;

  std::random_shuffle(input.begin(), input.end());
  for (int i = 0; i < n; ++i) {
    cout << i + 1 << ": " << input[i] << endl;
  }
  return 0;
}