#include<stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    jolly();
    deny();
}

void jolly(void)
{
    printf("He is a jolly good fellow.");
}

void deny(void)
{
    printf("Which nobody can deny!");
}