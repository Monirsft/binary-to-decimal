#include<stdio.h>
int main(){
int num,reminder,sum=0,reminder2,temp,dec=0,base=1;;
printf("binary number is:");
scanf("%d",&num);
while(num!=0){
    reminder=num%10;
    num=num/10;
    sum=sum*10+reminder;
  // printf("%d ",reminder);

}
temp=sum;


while(temp!=0){
     reminder2=temp%10;
    temp=temp/10;
    printf(" %d",reminder2);
   dec= dec+reminder2*base;
    base=base*2;
}
printf("decimal=%d\n",dec);

}
