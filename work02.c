#include <stdio.h>

int main() {

  int a = 1;
  double phi = 1.61803398875;
  char b = 'b';
  unsigned int x = 24;

  printf("this should return 1: %d\n", a);
  printf("this should return the golden ratio: %lf\n", phi);
  //phi gets rounded, it returns 1.618034

  printf("this is displaying a double as an int: %d\n", phi);
  //returns 73869, so a random int?
  printf("this is displaying an int a double: %lf\n", a);
  //returns phi, the same double from before
  //both of these generate warnings but still compile

  printf("this is displaying an int as a char: %c\n", 97);
  //returns the char represented by that int, in this case that's 'a'
  printf("this is displaying a char as an int: %d\n", b);
  //returns 98, which is the numerical equivalent of 'b'


  printf("what happens if you go out of bounds? %c\n", b+600);
  //returns a question mark inside a diamond - replacement character
  printf("going out of bounds the other way: %c\n", b-900);
  //same replacment character


  printf("this is an unsigned int: %d\n", x);

  return 0;
}
