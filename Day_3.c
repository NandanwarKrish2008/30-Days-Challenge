//number pattern in C and Java
//DM for source code

#include<stdio.h>

int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            //if i channge this j and write i then the output will be 
            // 1
            // 22
            // 333
            // 4444
            //Let's Try this
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}