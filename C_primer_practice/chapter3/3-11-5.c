#include<stdio.h>
int main(){
    int age_year;
    printf("Your age:\n");
    scanf("%d",&age_year);
    double age_sec = age_year*3.156e7;
    printf("Seconds:%e",age_sec);
    return 0;

}