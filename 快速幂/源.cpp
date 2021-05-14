#include<iostream>
using namespace std;

long long fastPower(long long base, long long power){
	long long result = 1; 
	while (power>0){
		if (power & 1){                     //�ȼ��ڣ�power % 2 == 1
			result = result * base % 1000;  //ָ��Ϊ����ʱ������������ĵ���һ�η��ռ��������1000ȡģ����ȡ����λ����
		}
		power >>= 1;                        //�ȼ��ڣ�power = power / 2;��Ϊָ��Ϊ�������ɽ�power = power - 1;��power = power / 2;���кϲ�
		base = (base*base) % 1000;          //����ȡģ���㷨�򣬳�����ȡģ�������ȡģ�����ս��ȡģ���һ��
	}
	return result;
}

int main(){
	long long base,power;                    //���������ָ��
	cin >> base>>power;
	cout << fastPower(base, power) << endl;  //������
	return 0;
}