#include<stdio.h>

int main()

{
    int test1;
    int test2;
    test1 = 15;
    test2 = 10;
    if(test1>test2){
        if(test1-test2>3){
            printf("test1 is bigger than test2 and test1 - test2 is bigger than 3\n");
        }
        else{
            printf("test1 is bigger than test2 but test1 - test2 is smaller than 3\n");
        }
    }
    else{
        if(test2-test1>3){
            printf("test2 is bigger than test1 and test2 - test1 is bigger than 3\n");
        }
        else{
            printf("test1 is bigger than test2 but test2 - test1 is smaller than 3\n");
        }
    }
}