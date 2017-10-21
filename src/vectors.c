#include <stdio.h>
#include "../include/vectors.h"

vector vectorAdd(vector *p , vector *q)
{
  vector z = 
  { 
    .x = p->x + q->x,
    .y = p->y + p->y,
    .z = p->z + p->z  
  };
  return z;
}
vector vectorSub(vector *p , vector *q)
{
  vector z = 
  { 
    .x = p->x - q->x,
    .y = p->y - p->y,
    .z = p->z - p->z  
  };
  return z;
}

vector vectorMul(vector *p , vector *q)
{
  vector z = 
  { 
    .x = p->x * q->x,
    .y = p->y * p->y,
    .z = p->z * p->z  
  };
  return z;
}

vector vectorSquale(vector *p, double c)
{
  vector z = 
  { 
    .x = p->x * c,
    .y = p->y * c,
    .z = p->z * c  
  };
  return z;
}

vector vectorCross(vector *p , vector *q)
{
  vector z =
  { 
    .x = p->y * q->z - p->z * q->y,
    .y = p->z * q->x - p->x * q->z,
    .z = p->x * q->y - p->y * q->x  
  };
  return z;
}
