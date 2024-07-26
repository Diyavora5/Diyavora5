#include<stdio.h>
int main(){
   int n;
   printf("Enter the size of both array : ");
   scanf("%d",&n);
   int a[n],c[n];
   for(int i=0;i<n;i++)
   {
     printf("enter the members of array a :");
     scanf("%d",&a[i]);
   }

   for(int i=0;i<n;i++){
     printf("enter the members of array c :");
     scanf("%d",&b[i]);
   }
   for(int i=0;i<n;i++){
     printf("%d",a[i]);
   }
   for(int i=0;i<n;i++){
     printf("%d",b[i]);
   }
}
