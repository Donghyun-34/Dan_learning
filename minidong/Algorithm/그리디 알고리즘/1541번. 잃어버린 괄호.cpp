/*
	greedy �˰��� ������ ����(���� 1541��. �Ҿ���� ��ȣ)
	���� �м� : ���ڿ� '+', '-'�� �־����� �ش� ������ ������ ���� �� �ִ� �ּҰ� ���ϱ�. 
	�� ���� ���� : '-'�� ���� ���θ� �������� ��츦 ������.
					1. '-' ���� ��� : �׳� ��ü ���� �� �ּҰ�.
					2. '-' ���� : -�� ������ ���� ���� ���� ���� ���� �ּҰ�. 
						-> -�� 2�� �̻��� ��쿡�� ���������� �ۿ��ϸ� �ȴ�. 
	���� ��� : ������ ��� �� �ּҰ��� ã�� �����̹Ƿ�, '-'�� ������ ����. 
*/
#include <iostream>
using namespace std;
int len=0, minu=0, num_min=0;

int init(int *num, char *calcul, char *temp){
	gets(calcul);
	
	int j=0, y=0; //j : temp�� ����, y : num�� ����. 
	int x=1, count=0;//x�� �ڸ���.
	int res_1=0, res_2=0; // res_1 : - �տ� ���� ������ ��, res_2 : - ���Ŀ� ���� ���� ��. 
	while(calcul[len]!=0){
		x=1;
		if(calcul[len]>='0' && calcul[len]<='9')
			count++;
		else{
			temp[j++]=calcul[len];
			int tmp=count-1;//�ڸ��� 
			while(tmp-->0)
				x*=10;
			for(;count>0;count--){
				num[y]+=(calcul[len-count]-'0')*x;
				x/=10;
			}
			y++;
			count=0;	
			if(calcul[len]=='-'){
					minu++;
			}
		}
		len++;
	}
	int tmp=count-1;//�ڸ��� 
	while(tmp-->0)
		x*=10;
	for(;count>0;count--){
		num[y]+=(calcul[len-count]-'0')*x;
		x/=10;
	}//������ �Է��� �����̹Ƿ� �ش� �� �Է����� �κ�.
	
	return y+1;
}

int main(){
	
	int num[25]={0}, cnt=0; // num : ���� ���� �� �ִ� ������ �ִ�.
	char calcul[51], temp[24]={0}; //calcul : ���� �Է¹޴� ����.
	
	cnt=init(num, calcul, temp);
}
