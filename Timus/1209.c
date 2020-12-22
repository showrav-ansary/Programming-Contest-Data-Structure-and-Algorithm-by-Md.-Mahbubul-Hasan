#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double m;
    scanf("%d",&n);

    for (int i = 0; i <n; i++){
        scanf("%lf",&m);
        if(i>0)
            if( sqrt(8.0*m -7) == (int)sqrt(8.0*m -7))
                printf(" 1");
            else
                printf(" 0");
        else
            if(sqrt(8.0*m -7) == (int)sqrt(8.0*m -7))
                printf("1");
            else
                printf("0");
        
    }
    return 0;
}