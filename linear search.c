#include <stdio.h>
#define max 20
int main()
{
    int arr[max],n,i,flag=0,s;
    printf("how manby elements do you want");
    scanf("%d",&n);
    printf("enter the elements of array......\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf(" enter the search element\n");
        scanf("%d",&s);
        for(i=0;i<n;i++)
            {
                if(arr[i]==s)
                {
                     flag=flag+1;
                      printf("%d element found at %d index\n",s,i);
                }
            }
            if(flag>0)
            {
                printf("%d element found at %d times\n",s,flag);

            }

}
