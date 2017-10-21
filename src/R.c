#include <stdio.h>
#include <../include/r1.h>
#include <r1.h>
#include <r2.h>
int main()
{
  affiche(" Test 1 ");
  affiche2(" Ceci est la fin");
  printf("Lol");
  
  int width = 640;
  int height = 480;
  
  for(int i = 0; i < width ; i++)
  {
    for(int j = 0; j < height ; j++)
    {
		//return color
	   printf(" %d %d", i ,j ); 
	   break;
	  
    } 
  }
  return 0;
} 
