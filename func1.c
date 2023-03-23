#include<stdio.h>
#include <math.h>

void printhello(){
    printf("hello\n");
}
void printbye();
int main(){
    printhello();
    printbye();
    return 0;
}
void printbye(){
    printf("good bye");
}
