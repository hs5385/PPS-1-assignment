#include<stdio.h>
int global_var = 10;//Global variable
static int static_global_var=20;//Static global variable 
void fun()
{
    auto int a=30;//Automatic variable
    static int b=40;//Static variable
    register int register_var=50;//Register variable
    //Print values
    printf("Automatic Variable:  %d\n" , a);
    printf("Static local variable:  %d\n" , b);
    printf("Register variable : %d\n" , register_var);
    printf("Global variable :   %d\n", global_var);
    printf("Static Globlal variable:   %d\n" , static_global_var);
    //Modifying values
    a=a+40;
    b=b+30;
    //End of Function
}
int main()
{
    //Print values
    printf("Name : Harsh Soni\n");
    printf("Class : CSE-AI&ML AG2 section\n");
    printf("Reg. No. : RA2411026010878\n");
    printf("1)First call :\n ");
    fun();//First call  
    printf("2)Second call ;\n");
    fun();//Second call
    return 0;
}
