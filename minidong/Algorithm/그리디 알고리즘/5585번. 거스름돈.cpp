#include <iostream>
using namespace std;

int main(){
	//int arr[6]={500, 100, 50, 10, 5, 1};
	int money;
	cin>>money;
	money=1000-money; // 1000������ �Ž�������ϴ� �ݾ��� ���ϴ� ��. 
	int count=0;
	while(1){
		if(money>=500)
			money-=500;
		else if(money>=100)
			money-=100;
		else if(money>=50)
			money-=50;
		else if(money>=10)
			money-=10;
		else if(money>=5)
			money-=5;
		else if(money>=1)
			money-=1;
		else //money==0 �̸� �ݺ��� ����. 
			break;
		count++; 
	}
	cout<<count;
}
