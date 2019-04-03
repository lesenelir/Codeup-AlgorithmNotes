#include <iostream>
#include <cstring>
using namespace std;

struct bign{
	int d[10100];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};

bign change(char str[]) {
	bign a;
	a.len = strlen(str);
	for (int i = 0; i < a.len; i++) {
		a.d[i] = str[a.len-i-1] - '0';
	}
	return a;
}



//C进制转换为A进制
bign cal(bign b,int a,int c){
	bign e;  
	int carry;
	while(b.len != 0){  
		carry = 0;
		for(int i = b.len-1; i >= 0; i--) { //低位开始
			b.d[i] += carry * c; 
			carry = b.d[i] % a;
			b.d[i] /= a;
			
		}
		while(b.d[b.len-1] == 0) { //出口
			b.len--;
		}
		e.d[e.len++]=carry;
	}
	return e;
}

int main(int argc, char *argv[]) {
	char str[1001];
	while (scanf("%s", str) != EOF) {
		bign b = change(str); //存储十进制数转bign类型
		bign c = cal(b, 2, 10); //十进制数转二进制数存储bign c中
		//将c中的二进制数逆置
		for (int i = 0; i < c.len / 2; i++) {
			int temp = c.d[i];
			c.d[i] = c.d[c.len-i-1];
			c.d[c.len-i-1] = temp;
		}
		bign e = cal(c, 10, 2);
		for (int i = e.len-1; i >= 0; i--) { //从低位开始输出
			printf("%d", e.d[i]);
		}
		printf("\n");
	}
}