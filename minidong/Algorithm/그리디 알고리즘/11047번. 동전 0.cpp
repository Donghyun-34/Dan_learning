#include <iostream>
using namespace std;

int main(void){
	int money=0, length=0;
	cin>>length>>money; //�ݾ��� ũ��� ������ �������� �Է¹޴´�. 
	int * array=new int[length];
	int i=0;
	for(i=0; i<length; i++){
		cin>>array[i];
	}
	int count=0;
	while(1){
		count+=money/array[i-1];//������ ����� i�� ������(ũ�Ⱑ �ִ밪�� �����Ƿ� 1�� ���ְ� ����Ѵ�.) 
		if(money%array[i-1]==0)
			break;
		money=money%array[i-1];
		i--;
	}
	cout<<count;
}
