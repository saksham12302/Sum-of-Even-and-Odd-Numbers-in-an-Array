#include <stdio.h>

int main(){
    int a[10],i,sum=0,pro=1;
    
    for(i=0;i<10;i++) {
        printf("Enter the Numbers\n");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++) {
        if(a[i]%2==0) {
            sum=sum+a[i];
        }
        else {
            pro=pro*a[i];
        }
    }
    
    printf("Sum of Even Numbers is : %d\n and Sum of Odd Numbers is : %d\n",sum ,pro);
    return 0;
} 