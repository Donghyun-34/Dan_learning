/*
	greedy �˰��� ������ ����(���� 1541��. �Ҿ���� ��ȣ)
	���� �м� : ���ڿ� '+', '-'�� �־����� �ش� ������ ������ ���� �� �ִ� �ּҰ� ���ϱ�. 
	�� ���� ���� : '-'�� ���� ���θ� �������� ��츦 ������.
					1. '-' ���� ��� : �׳� ��ü ���� �� �ּҰ�.
					2. '-' ���� : -�� ������ ���� ���� ���� ���� ���� �ּҰ�. 
						-> -�� 2�� �̻��� ��쿡�� ���������� �ۿ��ϸ� �ȴ�.(��������� �߸��� ������ �ƴϾ�����,
							���� �ʹ� ���������� ��ȿ�����̾���.
					3. ���� ���� : '-'�� �ϳ��� ������ �� �ڿ� ���� ������ �ĵ��� ���� '-'�� ����ϸ� �ּҰ��� ���´�. 
	���� ��� : ������ ��� �� �ּҰ��� ã�� �����̹Ƿ�, '-'�� ������ ����. 
*/
#include <iostream>
#include <string>
using namespace std;
string calcul;

int Result(void)
{
        int result = 0;
        string temp = "";
        bool minus = false;
        for (int i = 0; i <= calcul.size(); i++)
        {
            if (calcul[i] == '+' || calcul[i] == '-' || calcul[i] == '\0')
			{
				if (minus)
					result -= stoi(temp);
				else
					result += stoi(temp);
				temp = "";
				if (calcul[i] == '-'){//'-'�� �ϳ��� ������ �� �ڿ� �ִ� ��� ���� �� �������� ���Ǵ� ���� �ּҰ��̴�. 
					minus = true;
				}
			}
			else
				temp += calcul[i];
		}
		return result;
}

int main(void)
{
	cin >> calcul;
	cout << Result() << endl;
	return 0;
}
