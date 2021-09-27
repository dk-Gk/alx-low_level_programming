#ifndef ABS
#define ABS(x) x
#if x > 1
int x = x;
#endif
#if x < 1
int x = ((-1) * x);
#endif
#endif
