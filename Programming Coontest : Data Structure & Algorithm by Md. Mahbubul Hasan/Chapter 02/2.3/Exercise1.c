#include <stdio.h>

int main(){
    printf("Enter the term number : ");
    int n;
    scanf("%d", &n);
    if(n<11)
        printf("%d\n",n-1);
    else if(n<20)
        printf("%d\n",(n%10)*11);
    else if(n<30)
        printf("%d\n",(n%20)*10+101);
    else if(n<40)
        printf("%d\n",(n%30)*10+202);
    else if(n<50)
        printf("%d\n",(n%40)*10+303);
    else if(n<60)
        printf("%d\n",(n%50)*10+404);
    else if(n<70)
        printf("%d\n",(n%60)*10+505);
    else if(n<80)
        printf("%d\n",(n%70)*10+606);
    else if(n<90)
        printf("%d\n",(n%80)*10+707);
    else if(n<100)
        printf("%d\n",(n%90)*10+808);
    return 0;
}