#include <stdio.h>

int main(){
    int t,i,b,a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a>b)
        printf("A\n");
        else 
        printf("B\n");
    }
    return 0;
}
