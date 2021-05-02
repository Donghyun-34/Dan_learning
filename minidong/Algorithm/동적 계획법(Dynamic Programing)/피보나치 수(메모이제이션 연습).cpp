/*
	���� ��� : �赿��(akakak413@naver.com) 
	���� ���� : ���� ��ȹ�� ����(�޸������̼�)
	�ڵ� ���� : �Ǻ���ġ ���� ����Լ��� ���ϱ�.
	���� ��� 
		1. �Ϲ����� ���� ������ ���������� ���ϴ� ���
		2. �޸������̼��� ������Ѽ� ����Ƚ���� �ּ�ȭ ��Ų ���
*/
#include <stdio.h>
#include <sys/time.h> 
long long int data[100000000]; 
//�޸������̼� ���� �� (A)
long long int fibo_nonmemo(int n)
{
	if(n<=2)
		return 1; 
	else
		return fibo_nonmemo(n-1)+fibo_nonmemo(n-2);
}

//�޸������̼� ���� �� (B) 
long long int fibo_memo(int n)
{
	if(n<=2)
		return 1;
	else if(data[n]!=0)//�̹� �ѹ� ����ߴ� ���� ��� 
		return data[n];//������ ���� ��ȯ�Ѵ�.(ĳ��) 
	else{
		data[n]=fibo_memo(n-1)+fibo_memo(n-2);
		return data[n];
	}
}

int main(){
	struct timeval stime, etime;
	double diffTime;

	
	gettimeofday(&stime, NULL);
	printf("�޸������̼� ���� ��\n\n\t40��° �Ǻ���ġ �� : %d\n\n", fibo_nonmemo(40));
	gettimeofday(&etime, NULL);
	
	diffTime = etime.tv_usec - stime.tv_usec;
    printf("%lf us\n\n\n\n", diffTime);
    
    gettimeofday(&stime, NULL);
	printf("�޸������̼� ���� ��\n\n\t445544��° �Ǻ���ġ �� : %d\n\n", fibo_memo(445544));
	gettimeofday(&etime, NULL);
	
	diffTime = etime.tv_usec - stime.tv_usec;
    printf("%lf us\n", diffTime);
}
