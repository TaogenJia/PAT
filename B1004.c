#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char stu[n][3][10];
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++)
            scanf("%s",stu[i][j]);
    }
    int max = 0, min = 100, x = -1, y = -1;
    for(i = 0; i < n; i++){
        if(atoi(stu[i][2])>max){
            max = atoi(stu[i][2]);
            x = i;
        }
        if(atoi(stu[i][2])<min){
            min = atoi(stu[i][2]);
            y = i;
        }
    }
    printf("%s %s\n",stu[x][0],stu[x][1]);
    printf("%s %s\n",stu[y][0],stu[y][1]);
    
    return 0;
}
