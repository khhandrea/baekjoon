#include<iostream>

int main()
{
	int n, i;
	int a[10000];
	scanf("%d", &n); //���� �Է� �ޱ�
	for(i=1; i<=n; i++) //���� ��ŭ �Է� �ޱ�
	  scanf("%d", &a[i]); //�о ������� �迭�� �ִ´�.
	
	for(i=n; i>=1; i--)
	  printf("%d ", a[i]); //i �� �迭�� ����Ǿ� �ִ� �� ����ϱ�
	
	return 0;
}
