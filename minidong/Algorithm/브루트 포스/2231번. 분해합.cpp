/*
	���Ʈ ���� �˰��� ������ ����(���� 2231��. ������) 
	���� �м� : �ڿ��� N�� �־�����, �ش� �ڿ����� ������ �� �ּ� ������ ���.(������ 0���) 
	�� ���� ���� : �ܼ��� 1���� �ִ밪���� �������� ���ϰ� �־��� N�� ������ ���� ������ ���, ������ 0 ���. 
*/
#include <iostream>
using namespace std;

int cal(int num){
	int sum=num;//�������� �ڱ��ڽ� + �� �ڸ� ���ڵ��� �� �̹Ƿ� sum�� �Է°����� �ʱ�ȭ. 
	while(num>0){
		sum+=num%10;
		num=num/10;
	}
	return sum;
}

int main(){
	int num=0;
	cin>>num;
	for(int i=1; i<=1000000; i++){
		if(cal(i)==num){
			cout<<i;
			return 0;
		}
	}
	cout<<"0";
	return 0;
}
