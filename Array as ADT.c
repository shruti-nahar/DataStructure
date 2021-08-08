#include<stdio.h>
#include<stdlib.h>
struct array
{
    int used_size;
    int total_size;
    int*p;
};
int main()
{
    struct array s;
    int size;
    (s*)used_size=size;
    (s*)p=(int*)malloc(size*sizeof(int));
    printf("Enter the total size ");
    scanf("%d",s->total_size);
    printf("Enter the used size ");
    scanf("%d",s->used_size);
    printf("/n--------------------------------------\n");
    printf("TOTAL SIZE: %d",s->total_size);
    printf("\nUSED SIZE: %d",s->used_size);
    printf("\nADDRESS: %d",s->p);
    
    
}
