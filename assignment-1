#include<stdio.h>
int global_var = 10;
static int static_global_var=20;
void fun()
{
    auto int a=30;
    static int b=40;
    register int register_var=50;
    printf("Automatic Variabl:  %d\n" , a);
    printf("Static local variable:  %d\n" , b);
    printf("Register variable : %d\n" , register_var);
    printf("Global variable :   %d\n", global_var);
    printf("Static Globlal variable:   %d\n" , static_global_var);
    a= a+40;
    b=b+30;
}
int main()
{
    printf("First call :\n ");
    fun();
    printf("Second call ;\n");
    fun();
    return 0;
}
