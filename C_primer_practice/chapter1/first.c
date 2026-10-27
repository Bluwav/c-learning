#include <stdio.h>      /*预处理器指令，包含另一个文件，stdio.h是c编译器软件包标准部分*/
int main(void)      /*main()总是第一个被调用，void表示不含任何参数,花括号表示函数的开始和结束*/
{
    int num;        /*声明：声明将使用num这个变量，且是int整数类型*/
    num = 1;

    printf("I'm a simple ");     /*调用printf()函数*/
    printf("computer.\n");
    printf("My favourite number is %d because it is first.\n",num);

    return 0;
}
