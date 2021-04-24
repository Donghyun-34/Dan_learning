/*
	greedy �˰��� ������ ����(���� 2217��. ����)
	���� �м� : �־��� N���� ������ ����ؼ� �� �� �ִ� �ִ� ���Ը� ���.
	�� ���� ���� : �ִ� �߷� ���� ��, �񱳸� ���� �ִ밪 ����. 
	���� ��� : �־��� ������ �� ������� �ʾƵ� �ȴٴ� ������ �־����Ƿ�, ������������ ���� �� 
				���������� ��� �ִ� �ִ��߷�(rope[i]*(i+1))�� ���Ͽ���. 
*/
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std; 
vector<int> rope;

int compaer(int num){
	int max=0;
	sort(rope.begin(), rope.end(), greater<int>());//������������ ����. 
	for(int i=0; i<num; i++){
		if(max<=rope[i]*(i+1))
			max=rope[i]*(i+1);
	}
	/*
		Ż�� �������� max> rope[i]*(i+1)�� ������ ����� ������ �ʾҴ�.
		�ֳ��ϸ� rope[i]�� ���� �۾����� i�� Ŀ���� Ŀ������ rope[i]*(i+1)�� ��ȭ���� Ŀ���� �����̴�. 
	*/
	return max;
}

int main(){

	int num=0;
	cin>>num;
	int input;
	for(int i=0; i<num; i++){
		cin>>input;
		rope.push_back(input);
	}
	cout<<compaer(num);
}
