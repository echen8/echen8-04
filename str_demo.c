// Eric Chen
// Work 04 -- str_demo

#include <stdio.h>
#include <strings.h>

int main() {

  /** 
       strcmp( str1, str2 );
       Returns the difference between two strings.  As we know, each char has a numerical value.  The function takes the sum of each string's chars' numerical value and subtracts the value of str2 from str1.

       strncmp( str1, str2, n );
       Compares in the same fashion as strcmp, but only up to the n-th char in each string.
   **/
  
  char s1[] = "peanut butter"; // String 1
  char s2[] = "hello there"; // String 2
  char s3[] = "woohooooooo";
  char s4[] = "WOOHOOOOOOO";
  int n = 7;  // Number of chars in the string to compare.

  printf( "s1: %s\n", s1 );
  printf( "s2: %s\n", s2 );

  int cmp = strcmp( s1, s2 );
  int ncmp = strncmp( s3, s4, n );

  printf( "strcmp( s1,s2 ) : %d\n", cmp );

  printf( "strncmp( s3,s4,%d ) : %d\n", n, ncmp );
  
  return 0;
}
