#include <stdio.h>

int drawSquare(int size, char fill){
    int i,j;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%c", fill);

        }
        printf("\n");
    }
    return 0;
}

int drawTriUp(int size, char fill){
    int i,j;

    for(i=0;i<size;i++){
        for(j=0;j<i+1;j++){
            printf("%c", fill);
        }
        printf("\n");
    }
    return 0;

}

int drawTriDown(int size, char fill){
    int i,j;

    for(i=size;i>0;i--){
        for(j=0;j<size-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("%c", fill);
        }
        printf("\n");
    }
    return 0;

}
