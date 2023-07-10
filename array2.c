#include<stdio.h>
int main(){

// insertion at specific location

int a[50];
int size;
int num, pos;

printf("enter the size of array:\n");
scanf("%d",&size);
if(size>50){
    printf("Overflow condition");
} else{
    printf("enter elt of array:\n");
}
for(int i=0; i<size; i++){
    scanf("%d", &a[i]);
}
printf("enter the number to be inserted:\n");
 
scanf("%d", &num);
printf("enter position:\n");
scanf("%d", &pos); 
if(pos<=0 || pos>size+1){
    printf("invalid position");
} else{  
    for(int i=size-1; i>=pos-1; i--){
        a[i+1]=a[i]; 
      //  printf("array: %d\n", &a[i+1]);
    } 
    a[pos-1]=num; 
    size++; 
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
 
} 
}
