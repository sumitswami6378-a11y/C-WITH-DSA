#include<stdio.h>
void towerofhanoi(int n, int source, int auxillary, int distination){

if(n==1){

    printf("disc %d is shifted from %d to %d\n",n,source,distination);
    return ;
}
towerofhanoi(n-1 , source ,distination, auxillary);
printf("disc %d is shifted from %d to %d\n", n,source,auxillary);
towerofhanoi(n-1,auxillary,source,distination);


}
int main(){
    int n;
    printf("ENTER THE NUMBER OF DISC=");
    scanf("%d",&n);
    towerofhanoi(n,1,2,3);
    return 0;
}