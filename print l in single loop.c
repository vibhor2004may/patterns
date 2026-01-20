#include <stdio.h>
int main(){
    int n = 5;
    for(int i=0; i<n*n; i++){
        if(i % n == 0 || i >= n*(n-1))
            printf("l ");
        else
            printf(" ");
        if(i % n == n-1)
            printf("\n");
    }
}
