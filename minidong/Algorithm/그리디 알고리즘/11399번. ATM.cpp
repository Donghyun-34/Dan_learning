#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int arr[1001]={0}; //������� ���� �ð��� �����ϴ� �迭(�ִ���� 1000���̹Ƿ� 1001ĭ ����) 
	int n=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n); //�⺻������ ������������ ����.
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i]*(n-i);//n-i�� ���ϴ� ������ i��° ���� �� n-i�� ��꿡 ���Ǳ� �����̴�. 
	}
	cout<<sum;
}

