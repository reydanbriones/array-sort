
#include <stdexcept>
#include "array.hpp"

using namespace std;

Array::Array () {
  array = {};
  array_size = 0;
}

Array::Array (int* arr, unsigned int size) {
  array = arr;
  array_size = size;
}

unsigned int Array::size () {
  return array_size;
}

int Array::get (unsigned int index) {
  if (index >= array_size) {
    throw invalid_argument("Index is greater than or equal to Array size");
  }

  return array[index];
}

void Array::sort_insert (int input) {
  unsigned int target_index = array_size;
  for (unsigned int i = 0; i < array_size; i++) {
    int element = array[i];
    if (element > input) {
      target_index = i;
      break;
    }
  }

  for (unsigned int i = array_size; i > target_index; i--) {
    array[i] = array[i - 1];
  }

  array[target_index] = input;
  array_size++;
}
