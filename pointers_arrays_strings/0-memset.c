#include "main.h"
char *_memset(char *s, char b,unsigned n)
{  
unsigned int i;

// Loop over the first n bytes and set each byte to the value b
for (i = 0; i < n; i++) 
{
s[i] = b;
}

// Return the original pointer to the memory area
return s;
}
