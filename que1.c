#include<stdio.h>
void fact(int);

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("factors %d are: ",n);
    fact(n);
    return 0;
    
    
}
void fact(int n)
{
    int i;

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {     
            
            if(i==2||i==3||i==5)
            {
                if(i==2&&i==3)
                {
                    printf("true");
                }
                else if(i==2&&i==5)
                {
                    printf("true");
                }
                else
                {
                    printf("true");
                }
            }
            else
            {
                printf("false");
            }
        
            
           
        }
          
        

    }
           
}

