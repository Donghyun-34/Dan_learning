/*
	���Ʈ ���� �˰��� ������ ����(���� 7568��. ��ġ) 
	���� �м� : �����Կ� Ű�� �ϳ��� ������ �Է� �ް� �ش� �ֵ� �߿��� ũ�� �񱳸� �ϰ�,
				�񱳱� �߿��� ��������� ���. 
	�� ���� ���� : C++�� STL �� �ϳ��� VECTOR�� ����ؼ� Ű�� �����Ը� �ϳ��� �����ϰ�, ũ�� �� ����. 
*/
#include <iostream>
#include <vector>
using namespace std;

class People{
	public:
		int weight;
		int height;
		int rank=1;//�ڽź��� ��ġ�� ū ����� �Ѹ� ������ 1�̹Ƿ� 1�� �ʱ�ȭ. 
		People(int weight, int height) : weight(weight), height(height){}
		void plus_rank(){
			this->rank+=1;
		}
	
	bool operator<(People temp){
		if(this->weight<temp.weight && this->height<temp.height)
			return 1;
		else
			return 0;
	}
};

int main(){
	vector<People> temp;
	int n=0;
	cin>>n;
	int wei, hei;
	for(int i=0; i<n; i++){
		cin>>wei>>hei;
		temp.push_back(People(wei,hei));
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j) continue;
			else if((temp[i]<temp[j])==1)
				temp[i].plus_rank();
		}
	}
	for(int i=0; i<n; i++){
		cout<<temp[i].rank<<" ";
	}
}
