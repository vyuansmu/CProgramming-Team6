#include <stdio.h>
#include <stdlib.h>

int a, b, p, q, n;

typedef struct {
  int year;
  int month;
  int day;
} date;

int hello_d()
{
    printf("New World");
}

int math_op(a,b) {

    /* Local variables to hold results*/
    int tst_add;
    int tst_sub;
    int tst_multi;

    printf("Simple Mathematics Calculations\n");
    tst_add = func_add(a, b);
    tst_sub = func_sub(a, b);
    tst_multi = func_multi(a, b);

    return 0;
}


/* Functions declaration*/

/*Addition function*/
int func_add(p, q)
{
    int add_val, *add_ptr;
    add_ptr = &add_val;
    add_val = (p + q);
    printf("Sum : %d\n", add_val);
    printf("Address of Sum variable : %p\n", add_ptr);
    return add_val;
}

/*Subtract function : Max value - Min Value*/
int func_sub(p, q)
{
    int sub_val, *sub_ptr;
    sub_ptr = &sub_val;
    if (p > q)
        sub_val = p - q;
    else
        sub_val = q - p;
    printf("Difference : %d\n", sub_val);
    printf("Address of Diff variable : %p\n", sub_ptr);
    return sub_val;
}

/*Multiplication function*/
int func_multi(p, q)
{
    int mul_val, *mul_ptr;
    mul_ptr = &mul_val;
    mul_val = (p * q);
    printf("Multiplied Value : %d\n", mul_val);
    printf("Address of Multiplied variable : %p\n", mul_ptr);
    return mul_val;
}

/*Addition of array members*/
int add_array(int* p, int size) {
    int total = 0;
    int k;
    for (k = 0; k < size; k++) {
        total += p[k];  /* it is equivalent to total +=*p ;p++; */
    }
    return (total);
}

/*Dynamic Memory allocation*/
 
int func_date(void) {
 
  date *mylist = malloc(sizeof(date) * 10);
 
  mylist[0].year = 2012;
  mylist[0].month = 1;
  mylist[0].day = 15;
 
  int i;
  for (i=1; i<10; i++) {
    mylist[i].year = 2012-i;
    mylist[i].month = 1 + i;
    mylist[i].day = 15 + i;
  }
 
  for (i=0; i<10; i++) {
    printf("mylist[%d] = %d/%d/%d\n", i, mylist[i].day, mylist[i].month, mylist[i].year);
  }
 
  free(mylist);
  return 0;
}
 
int seq_sum() {
  
  int i, * ptr, sum = 0;
  ptr = calloc(20, sizeof(int));
  
  if (ptr == NULL) 
  {
     printf("Error! memory not allocated.");
     exit(0);
  }
  printf("Building and calculating the sequence sum of the first 10 terms \ n ");
  
  for (i = 0; i < 10; ++i) 
  { 
    * (ptr + i) = i;
    sum += * (ptr + i);
  }
  
  printf("Sum = %d", sum);
  free(ptr);
  
  return 0;
}
