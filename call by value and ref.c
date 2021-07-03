call by value and call by reference
#include<stdio.h>
void swap_call_by_val(int,int);
void swap_call_by_ref(int *,int *);
void main(){
    int a = 1,b = 2,c = 3,d = 4;
    printf("\n in main(), a = %d, b = %d",a,b);
    swap_call_by_val(a,b);
    printf("\n in main(), a = %d, b = %d",a,b);
    printf("\n in main(), c = %d, d = %d",c,d);
    swap_call_by_ref(&c,&d);
    printf("\n in main(), c = %d, d = %d",c,d);

}
void swap_call_by_val(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("\n In function(call by value) a = %d, b = %d",a,b);
}
void swap_call_by_ref(int *c,int *d){
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("\n In function(call by reference) c = %d, d = %d",*c,*d);
}
