#include<stdio.h>
int cs[2][3]={ {1,2,3},{4,5,6} };
int i,j;
int main(){
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",cs[i][j]);
        }
    }
    return 0;
}
