#include<stdio.h>
int main(){
	int i,j,a,n,num[30];
	printf("size of an array:");
	scanf("%d",&n);
	printf("the elements of array are:\n");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
	}
	printf("the asending order of elments are:");
	for(i=0;i<n;i++){
	printf("%d\t",num[i]);
}
	return 0;
}
