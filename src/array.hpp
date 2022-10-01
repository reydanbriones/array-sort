
#ifndef _ARRAY_H
#define _ARRAY_H

class Array {
public:
  Array ();
  Array (int*, unsigned int);

  unsigned int size ();
  int get (unsigned int);
  void sort_insert (int);

protected:
  unsigned int array_size;
  int* array;
};

#endif
