#include <iostream>

template<typename T>
class DebugVector {
public:
  DebugVector();
  DebugVector(const DebugVector &other);     // Copy constructor
  DebugVector & operator=(const DebugVector &other);   // Assn. operator
  ~DebugVector();

  /* Othre member functions.*/

private:
  T *array;
  int allocatedLength;
  int logicalLength;
  static const int BASE_SIZE = 16;

  void copy(const DebugVector &other);
  void clean(void);
};

template<typename T>
DebugVector<T>::DebugVector() : array(new T[BASE_SIZE]),
  allocatedLength(BASE_SIZE), logicalLength(0) {}

template<typename T>
DebugVector<T>::~DebugVector()
{
  clean();
}

template<typename T>
DebugVector<T>::DebugVector(const DebugVector &other)
{
  copy(other);
}

template<typename T>
DebugVector<T> & DebugVector<T>::operator=(const DebugVector &other)
{
  if (this != &other) {
    clean();
    copy(other);
  }

  return *this;
}

template<typename T>
void DebugVector<T>::clean(void)
{
  delete [] array;
  array = nullptr;        // Just to be safe
  logicalLength = allocatedLength = 0;
}

template<typename T>
void DebugVector<T>::copy(const DebugVector &other)
{
  logicalLength = other.logicalLength;
  allocatedLength = other.allocatedLength;
  array = new T[allocatedLength];
  for (int i = 0; i < logicalLength; ++i) {
    /* If we're storing primitive types, then the line will
      simply copy the values over, but if we're storing objects,
      the line calls the class's assignment operator.*/
    array[i] = other.array[i];
  }
}

int main(int argc, char const *argv[])
{
  DebugVector<int> a, b;
  DebugVector<int> c = a;

  return 0;
}