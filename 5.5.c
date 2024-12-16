#include <stdio.h> 
#include <conio.h> 
#include <time.h> 
int main(void) { 
 int h, m; 
for(h=0; h<=23; h++) { 
 for(m=0; m<=59; m++) { 
 int_gotoxy (38,12);
 printf("%02d:%02d", h, m); 
 int_sleep (1) ; 
 }
 } 
 return 0; 
}