/*
	���Ʈ ���� �˰��� ������ ����(���� 1436��. ��ȭ���� ��.) 
	���� �м� : �ܼ��� n�� �Է� ������ ��Ģ�� n��° ���� ���. 
	�� ���� ���� : �ܼ� ���� ��� + 6�� ���� ���� ��쿡 ���� ��Ģ 
*/
#include <iostream>
using namespace std;

int main(){
	while(1){
	int num;
		cin>>num;
	int i=0, cnt=1, state=11;//i : ��� �� ����� ��, cnt : �ݺ�Ƚ�� ���, state : 11�� ����� �ǹ̴� ������ ��Ģ�� ����.
	while(cnt<num){
		if((cnt-6)%19==0){
			if(num-cnt==66){
				
			}
		}
		else{
			cnt++;
			i++;
		}
	}
	int res;
	if(state==11)
		res=666+(i*1000);
	else
		res=(i+1)*1000+660+state;
	cout<<res<<endl;
	}
}

