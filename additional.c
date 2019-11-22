//将十进制数转化为二进制数
int Change()
{
	int i = 0, x = 0;
	int ar[30];
	int k, j, temp;
	printf("请输入一位十进制数");
	scanf("%d", &x);
	while (x > 0)
	{
		temp = x % 2;
		ar[i++] = temp;
		x = x / 2;
	}
	k = i;
	printf("转化为二进制数：\n");
	for (j = 0; j < k; j++)
	{
		if (i > 0)
		{
			ar[j] = ar[--i];
			printf("%d", ar[j]);
		}
	}
	printf("\n");
}
//对二进制数进行扩展
int * Expand(int ar[])
{   int cnt1=0;
	int b[50];
	int length=strlen(ar);
	for(int i=0;i<length;i++)
	{
		if(ar[i]==1){
			b[cnt1++]=1;
			b[cnt1++]=0;
		}
		else  if (ar[i]==0)
		{		b[cnt1++]=0;
		}
		else {
			b[cnt1++]=1;
			b[cnt1++]=1;
			b[cnt1++]=0;
			break;

		}
	}
	return b;
}
