#include<stdio.h>

//调整堆，保持大顶堆的性质,参数i指向根结点
void maxHeap(int *a,int n,int i)
{
	//left、right、largest分别指向
	//左孩子、右孩子、{a[i],a[left]}中最大的一个
	int left,right,largest;
	largest=left=2*i;
	if(left>n)
		return;
	right=2*i+1;
	if(right<=n && a[right]>a[left]){
        largest=right;
	}
	if(a[i]<a[largest]){//根结点的值不是最大时,交换a[i]，a[largest]
		a[i]=a[i]+a[largest];
		a[largest]=a[i]-a[largest];
        a[i]=a[i]-a[largest];
		//自上而下调整堆
		maxHeap(a,n,largest);
	}
}

//建堆
void creatHeap(int *a,int n)
{
	int i;
	//自下而上调整堆
	for(i=n/2;i>=1;i--)
		maxHeap(a,n,i);
}

//堆排序
void heapSort(int *a,int n)
{
	int i;
	creatHeap(a,n);//建堆
	for(i=n;i>=2;i--){
		//堆顶记录和最后一个记录交换
		a[1]=a[1]+a[i];
		a[i]=a[1]-a[i];
		a[1]=a[1]-a[i];
		//堆中记录个数减少一个，筛选法调整堆
		maxHeap(a,i-1,1);
	}
}



int main()
{
	int i;
	int a[7]={0,3,5,8,9,1,2};//不考虑a[0]
	heapSort(a,6);
	for(i=1;i<=6;i++)
		printf("%-4d",a[i]);
	printf("\n");
	return 0;
}

