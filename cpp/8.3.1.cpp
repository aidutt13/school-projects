#include <iostream>

using namespace std;

int main() {
  int tab[65536];
  int n;

  cout << "Podaj wielkosc tablicy >> ";
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cout << "tab[" << i << "] >> ";
    cin >> tab[i];
  }

  for (int i = 0; i < n; ++i)
    tab[i] *= tab[i];

  for (int i = 0; i < n; ++i)
    cout << tab[i] << endl;

  return 0;
}
