#ifndef _VECTORS_H_
#define _VECTORS_H_
typedef struct 
{
  double x;
  double y;
  double z;
}vector;

vector vectorAdd(vector *p , vector *q);
vector vectorSub(vector *p , vector *q);
vector vectorMul(vector *p , vector *q);
vector vectorCross(vector *p , vector *q);
vector vectorSquale(vector *q, double c);



#endif /*_VECTORS_*/
