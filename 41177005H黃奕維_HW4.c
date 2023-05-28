#include <stdio.h>
#include <stdlib.h>

void main()
{
    srand(time(NULL));
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int n[9];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=(rand()%10001 ) +10000;
            }
    }
    /////////------------------------------------print
    printf("原始矩陣：\n");
    for(int k=0;k<3;k++){
        printf("%d %d %d\n",a[k][0],a[k][1],a[k][2]);
    }
    /////////------------------------------------轉一維

    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            n[k]=a[i][j];
            k=k+1;
            }
        }
    /*
    for(int i=0;i<9;i++){
        printf("%d ",n[i]);
    printf("\n");

    }
    */
    /////////------------------------------------排序

    for(int i=0;i<9;i++){
        for(int j=0; j<9-i ;j++){
            //printf("%d %d ",i,j);
            if (n[j] < n[j+1]){
                int temp = n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
                }
            }
        }
    /////////------------------------------------轉回二維
    /*
    for(int i=0;i<9;i++){
        printf("%d ",n[i]);
    }*/

    int k1=9;
    for(int i=0;i<3;i++){
        k1=k1-i;
        k=k1;
        for(int j=0;j<3;j++){
            b[i][j]=n[k-1];
            //printf("%d\n",n[k-1]);
            k=k-3;
            }
    b[2][2]=n[0];
        }
    /////////------------------------------------print
    printf("\n");
    printf("重新排列後的矩陣：\n");
    for(int k=0;k<3;k++){
        printf("%d %d %d\n",b[k][0],b[k][1],b[k][2]);

    }
    /////////------------------------------------Trans
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        c[j][i]=b[i][j];
        }
    }
    /////////------------------------------------print
    printf("\n");
    printf("轉置矩陣：\n");
    for(int k=0;k<3;k++){
        printf("%d %d %d\n",c[k][0],c[k][1],c[k][2]);

    }
}















