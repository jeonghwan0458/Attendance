#include <stdio.h>                                
#include <time.h>
 
int main(){
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
 
  printf("now: %d:%d\n",tm.tm_hour, tm.tm_min);
 
  return 0;
}
