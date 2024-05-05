#include "simple_module.h"
#include<stdio.h>
unsigned char sum(int x,int y){
    return x+y;
}
  char  sub(int x,int y){
    return x-y;
}
unsigned char mul(int x,int y){
    return x*y;
}
unsigned char div(int x,int y){
    return x/y;
}

int operation(unsigned char operation ,int x ,int y ){

   int result =0;
     switch (operation)
     {
     case '+':
        /* code */
        result =sum(x,y);
        break;
    case '-':
        /* code */
        result =sub(x,y);
        break;
    case '*':
        /* code */
        result =mul(x,y);
        break;
    case '/':
        result =div(x,y);

    break;
     default:
        break;
     }
     return result;
}
