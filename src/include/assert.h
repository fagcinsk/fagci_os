#ifndef __ASSERT_H
#define __ASSERT_H

void assert(const char *asserted_expr, const char *filename, const char *func, int line);
#define ASSERT(x) (x ? (void)0 : assert(#x, __FILE__, __func__, __LINE__));

#endif
