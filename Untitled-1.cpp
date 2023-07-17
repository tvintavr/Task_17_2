#include <iostream>

void swapab (int *a,int *b) {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main() {
    int massiv[]={1,2,3,4,5,6,7,8,9,10};
    for (int i=0;i<5;i++) {
        int * a = &massiv[i];
        int * b = &massiv[9-i];
        swapab(a,b);
    }
    for (int i=0;i<10;i++) {
        std::cout<<massiv[i]<<" ";
    }
}