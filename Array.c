#include <stdio.h>

void greeting(){

    printf("Hello!\n");
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Element at Index 0 is %d\n", arr[0]);
    printf("Element at Index 1 is %d\n", arr[1]);
    printf("Element at Index 2 is %d\n", arr[2]);
    printf("Element at Index 3 is %d\n", arr[3]);
    printf("Element at Index 4 is %d\n", arr[4]);

    greeting();

    return 0;
}