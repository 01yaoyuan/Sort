#include "sortfunction.h"
int main()
{	
	SqList L;
	int n,i,*p;
	while(scanf("%d\n",&n)!=EOF)
	{	CreateSqList1(&L,n);
		HeapSort(&L);
		Print1(L);
		printf("\n");
		/*p=(int *)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
			
		}
		ShellSort(p,n);
		for(int i=0;i<n;i++)
		{
			printf("%d ",*(p+i));
		}
		printf("\n");*/
		//Shell���� 
		/*p=(int *)malloc((n+1)*sizeof(int));
		input(p,n);
		InsertSort(p,n);
		output(p,n);*/
		//ֱ�Ӳ������� 
		/*CreateSqList(&L,n);
		SelectSort(&L);
		Print(L);
		//Destroy(&L);
		printf("\n");*/
		//��ѡ������ 
		/*p=(int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
			scanf("%d",&p[i]);
		QuickSort(p,0,n-1);	
		for(i=0;i<n;i++)
		printf("%d ",*(p+i));
		free(p);
		printf("\n");*/
		//�������� 
	}
	return 0;
}

