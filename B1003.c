
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);	
	char str[n][100];
	for(int h = 0; h < n; h++)
		scanf("%s",str[h]);
	for(int i = 0; i < n; i++){
		
		int len = strlen(str[i]);
		
		int x = -1;
		int j = 0;
		while(j < len){
			if(str[i][j]=='A')
				j++;
			else if(str[i][j]=='P'){
				x = j;
				break;
			}else{
				break;
			}
		}
		
		if(x==-1){
			printf("NO1\n");
			continue;
		}
		//printf("--%c--\n",str[i][x+1]);
		//char p[2] = {str[i][x+1]};
		//int u = (p==" ");
		//printf("--%d--\n",u);
		if(len>=x+2&&(str[i][x+1]=='A'|str[i][x+1]==' ')&&str[i][x+2]=='T')
			x = x + 2;
		else if(len>=x+3&&(str[i][x+1]=='A'|str[i][x+1]==' ')&&str[i][x+2]=='A'&&str[i][x+3]=='T')
			x = x + 3;
		else{
			printf("NO2\n");
			continue;
		}
		
		while(++x < len){
			if(str[i][x]!='A'){
				printf("NO3\n");
				continue;
			}
		}
		if(x == len)
			printf("YES\n");
	}
	return 0;
}
/*
1003. ��Ҫͨ����(20)
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�
�õ�������ȷ���������ǣ�
1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�
�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��
����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO

*/