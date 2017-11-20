#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,sum;
    char str[9];
    scanf("%d %d",&a,&b);
    sum = a + b;
    sprintf(str,"%d",sum);
    printf("%s\n",str);
    int flag = -1;
    for(int i = 0;str[i]!='\0';i++){
        printf("i=%d\n",i);
        printf("str[%d]=%d\n",i+1,str[i]);
    }
    printf("sizeof%ld\n",sizeof(str));
    return 0;
}
