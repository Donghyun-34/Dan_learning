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
#include <string>
using namespace std;
int sign=0, len=0;
string minu;

void find(string calcul){
	int i=0;
	while(calcul[len++]!=0){
		if(calcul[len]=='-') minu[i++]=len;
		sign++;
	}
}

int main(){
	
	int num=0; // num : ���� ���� �� �ִ� ������ �ִ�.
	string calcul; //calcul : ���� �Է¹޴� ����.
	
	cin>>calcul;
	find(calcul);
	int x=1, count=0, j=0, cnt=0;
	int res_1=0, res_2=0;
	for(len=0; len<calcul.length(); len++){
		x=1;
		if(calcul[len]>='0' && calcul[len]<='9')
			count++;
		else{
			int tmp=count-1;//�ڸ��� 
			while(tmp-->0)
				x*=10;
			for(;count>0;count--){
				num+=(calcul[len-count]-'0')*x;
				x/=10;
			}
			count=0;
			res_2+=num;
			if(calcul[len]=='-'){
				if(cnt==0){
					res_1=res_2;
					cnt++;
				}
				else{
					res_1-=res_2;
					cnt++;
				}
					
				res_2=0;
			}
			num=0;
		}
	}
	int tmp=count-1;//�ڸ��� 
	while(tmp-->0)
		x*=10;
	for(int i=count;i>0;i--){
		num+=(calcul[len-i]-'0')*x;
		x/=10;
	}
	res_2+=num;
	if(minu[0]==0 || calcul[len-count-1]=='+')//'-'�� ���� ���. 
		res_1=res_2;
	else if(len-count-1==minu[cnt-1])//������ �����ڰ� '-' �� ���.
		res_1-=res_2;
	printf("%d", res_1);
}
