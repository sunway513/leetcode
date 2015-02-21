#include <stdio.h>
#include <stdlib.h>

int canJump(int A[],int n){
    int canArrive = 0;
    for(int i=0;i <= canArrive && canArrive <n-1;i++){
        if(i +A[i] > canArrive)
            canArrive = i+A[i];
    }
    return canArrive >= n+1;
}
int main(){
    int A[5] = {2,3,1,1,4};
    int B[4] = {2,1,0,3};
    int res = canJump(A,5);
    if(res){
        printf("It can do it!\n");
        return 0;
    }
}


