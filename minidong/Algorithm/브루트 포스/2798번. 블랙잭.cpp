/*
	���Ʈ ���� �˰��� ������ ����.(���� 2798��. ����)
	���� �м� : �־��� N���� ���� �����߿��� 3���� ���ؼ�, 
	�־��� M�� �ִ��� ����� ���� ã�� ����.
	�� ���� ���� : �־����� N�� ������ 3~100�̹Ƿ� ���� �ܼ��� �� ���� ���(Counting Sort)�� ���,
				������������ ���� ��,  ���� ū �� ���� ���������� �� �� ����. 
*/
#include <iostream>
#include <algorithm>
using namespace std;
int N, M;

int cal(int *num){
	int sum=0, max_of_card=0, mid_of_card=0, min_of_card;
	int max_of_sum=0;
	
	for(int i=N; i>=3; i--){
		max_of_card=num[i-1];
		for(int j=i-1; j>=2; j--){
			mid_of_card=num[j-1];
			if(max_of_card+mid_of_card>M)
				continue;//�ִ�� ���� �� 2���� �ո����ε� M�� �Ѿ�� ���� �������� �ѱ��.
			min_of_card=j-2;
			while(min_of_card>=0){
				sum=max_of_card+mid_of_card+num[min_of_card];
				if(sum<=M && sum>max_of_sum) // ����� ������ �ٷ� ��� �ϴ� ���� �ƴ϶� ������ �� �˻� �غ��� �ִ밪�� ��� 
					max_of_sum=sum;
				min_of_card--;
			}
		}
	}
	return max_of_sum;
}

int main(){
	int num[100]={0};
	cin>>N>>M;
	
	int i=0;
	while(i<N){
		cin>>num[i];
		i++;
	}
	sort(num, num+N);//sort �Լ��� �̿��ؼ� ������������ ����.
	cout<<cal(num);
}
