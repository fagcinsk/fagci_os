#ifndef __STDLIB_H
#define __STDLIB_H

#include <stddef.h>

void* operator new (unsigned int size) throw() {  return 0; }
void* operator new[] (unsigned int size) throw() {  return 0; }
void operator delete (void * p) {  }
void operator delete[] (void * p) {  }

#endif
