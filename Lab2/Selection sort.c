#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
  int last,arr[1000];
printf("Enter the Size of array  :");
scanf("%d",&last);
srand(time(NULL));
for(int i=0;i<last;i++){
  arr[i]=rand()%10;
  printf("%d\t",arr[i]);
}printf("\n");
for(int i=0;i<last-1;i++){
  int j=i+1;
  for(;j<last;j++){
    if(arr[j]<arr[i]){
      arr[i]+=arr[j];
      arr[j]=arr[i]-arr[j];
      arr[i]=arr[i]-arr[j];
    }
  }
}for(int i=0;i<last;i++){
  printf("%d\t",arr[i]);
}
}
