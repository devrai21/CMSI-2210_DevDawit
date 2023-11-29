#include <stdio.h>

int main ()
{
  unsigned int x = 0x77710;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);

  if (*c == 0x10) // checks value of the first bit/integer 
  {
    printf ("Your computer is little-endian! \n");
  }
  else
  {
     printf ("Your computer is big-endian! \n");
  }
 
  return 0;
}