#include <iostream>

using namespace std;

int main(){
	int n, lt = 1, rt, cur, k = 1, res = 0;
	scanf("%d", &n);
	
	while(lt != 0){
		lt = n / (k * 10);
		rt = n % k;
		cur = (n / k) % 10;
		
		if(cur > 3)			res += (lt + 1) * k;
		else if(cur == 3)	res += lt * k + rt + 1;
		else if(cur < 3)	res += lt * k;
		
		k *= 10;
	}

	printf("%d", res);
}
