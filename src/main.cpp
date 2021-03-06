//
// This function will reverse a C-style string.  
// The general approach here is to set up a pointer at the back of the string
// as well as a pointer to the end of the string.  The two pointers will 
// walk towards one another and swap values

#include <stdio.h>


void reverse_string(char* start){

  char* end = start;
  char tmp;
 
  // move the 'end' pointer to the last character
  while ( *end){ 
    end++;
  }
  end--;
   
  while( start < end ){
    tmp = *start;
    *start = *end;
    *end   = tmp;
    start++;
    end--;
  }
}


int main(){

  char a[] = "watermelon";
  char b[] = "fleamarket";

  
  reverse_string(a);
  reverse_string(b);

  printf("%s \n",a);
  printf("%s \n\n",b);

  return 0;
}


