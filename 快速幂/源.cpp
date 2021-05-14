#include<iostream>
using namespace std;

long long fastPower(long long base, long long power){
	long long result = 1; 
	while (power>0){
		if (power & 1){                     //等价于：power % 2 == 1
			result = result * base % 1000;  //指数为奇数时，将分离出来的底数一次方收集，结果对1000取模，即取后三位整数
		}
		power >>= 1;                        //等价于：power = power / 2;因为指数为整数，可将power = power - 1;和power = power / 2;进行合并
		base = (base*base) % 1000;          //根据取模运算法则，乘数先取模再相乘再取模跟最终结果取模结果一致
	}
	return result;
}

int main(){
	long long base,power;                    //输入底数和指数
	cin >> base>>power;
	cout << fastPower(base, power) << endl;  //输出结果
	return 0;
}