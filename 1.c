/*#include <stdio.h>
#include <stdlib.h>
#defind MAX_SIZE 100

typedef struct
{
int key;
}element;


element stack[MAX];
int main()

{element data;
int top = 0;
int i;
 printf ("hi bro");

for(i=0, i<10; i++)
{
scanf("%d",&data.key);
push(&top, data.key);
}
print("\n");

printf("hi bro");
for(i=0, i<10; i++)
{pop(&top);
}
print("\n")
}
*///1.c

#include <stdio.h>
#include <stdlib.h>
int main (void)
{int i;
char *char_box;
int* int_box;
doubl* double_box;

char_box = (char*)malloc(16);
int_box = (int*)malloc(16);
double_box = (double*)malloc(16);
for(i=0, i<16; i++)
printf("%2d char_box : %p \n", i+1 ,char_box+i
);
printf("\n");
for(i=0, i<16; i++)
printf("%2d int_box : %p \n", i+1,int_box+i);
printf("\n")
for(i=0, i<16; i++)
printf("%2d double_box : %P \n", i+1, double_box+i):
printf("\n")

free(double_box);
free(int_box);
free(char_box);

return 0;
}/////2.c


