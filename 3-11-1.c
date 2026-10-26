#include<stdio.h>
int main(){
    int i = 2147483647;
    printf("%d\n",i);
    i += 1;
    printf("%d\n",i);  //整数上溢
    
    float f = 3.4e38f;
    f = f*10.00;
    printf("%f\n",f); //浮点上溢，inf

    float f2 = 1.0e-38f;
    f2 = f2/10.0f;
    printf("%f\n",f); //浮点下溢，inf

    return 0;

}
