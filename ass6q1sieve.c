#include<stdio.h>
void sieve(int n, int prime[]){
  
    int i,j;
    for(i=2;i<=n;i++)
        if(prime[i]==0)
            for(j=i*i;j<=n;j+=i)
                prime[j]=1;
    
    for(i=2;i<=n;i++)
        if(prime[i]==0)
            printf("%d\n",i);
}




int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int b;
    int prime[n+1];
    for(b=2;b<=n;b++)
        prime[b]=0;
        
    sieve(n,prime);
    return 0;
}
