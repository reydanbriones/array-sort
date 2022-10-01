
#include <iostream>
#include "array.hpp"

using namespace std;

void traverse_array (Array);

int main () {
  char exit = 'n';
  int predefined[5] = {-2, 1, 12, 20, 35};
  Array array(predefined, 5);
  int input;

  while (exit == 'n') {
    cout << "ORIGINAL ARRAY: ";
    traverse_array(array);

    cout << "Input number: ";
    cin >> input;

    array.sort_insert(input);

    cout << "NEW ARRAY: ";
    traverse_array(array);

    cout << endl << "Exit? [Y/n]" << endl;
    cin >> exit;
  }

  return 0;
}

void traverse_array (Array array) {
  unsigned int size = array.size();

  for (unsigned int i = 0; i < size; i++) {
    cout << array.get(i);
    if (i < size - 1) cout << ", ";
  }

  cout << endl;
}
