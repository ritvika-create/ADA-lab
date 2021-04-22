#include<stdio.h>
#include <stdlib.h>
int main(){
  int last,arr[1000];
printf("Enter the Size of array  :");
scanf("%d",&last);
for(int i=0;i<last;i++){
  arr[i]=rand()%20;
  printf("%d\t",arr[i]);
}printf("\n");
for(int i=1;i<last;i++){
  for(int j=0;j<=last-1-i;j++){
    if(arr[j]>arr[j+1]){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
  }
}for(int i=0;i<last;i++){
  printf("%d\t",arr[i]);
}
}
