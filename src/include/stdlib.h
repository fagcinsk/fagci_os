#include <stddef.h>

void* operator new (unsigned int size) throw() { size; return 0; }
void* operator new[] (unsigned int size) throw() { size;  return 0; }
void operator delete (void * p) {}
void operator delete[] (void * p) { }