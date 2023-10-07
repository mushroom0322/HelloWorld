#include <stdio.h>
#include <stdlib.h> //需要包含这个头文件
#include <time.h> // 包含time头文件

void drawMushroom() {
	printf("   ______    \n");
	printf("  /       \\ \n");
	printf(" |         | \n");
	printf(" ___________ \n");
	printf("   | OvO  |  \n");

}

int main() {
 // 使用当前时间作为随机数生成器的种子
    srand(time(NULL));
	printf("Hello world ,I am mushroom! This is a lusky number:%d\n", rand() % 10); //输出随机个位数
        drawMushroom();
	return 0;

}
