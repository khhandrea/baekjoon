#include<stdio.h>
#include<math.h>

int main()
{
	int h, b, c, s;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	printf("%.1f MB", (float)h*b*c*s/1024/1024/8 );
	return 0;
}
