#include<stdio.h>
#include<math.h>
#include<time.h>
float mean(int a[],int n);
float variance(int a[],int n );
int random32(){
    
    int i, n, d, r;
    for (i = 0; i < 32; i++)
    {
        n = clock();
        d = n & 1;
        r = r + d * (1 << i);
    }
    return r%10;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i]=random32();
     for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    float stddev=sqrt(variance(arr,n));
    printf("mean=%f\n",mean(arr,n));
    printf("var=%f\n",variance(arr,n));
    printf("stddev=%f\n",stddev);

}

float mean(int a[],int n){
    int i;
    float sum=0.0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
        
    }
    return (sum/(float)n);
}
float variance(int a[],int n){
    int i;
    float sum=0.0;
    float x=mean(a,n);
    for(i=0;i<n;i++){
        sum+=(x-a[i])*(x-a[i]);

    }
    return ((sum/(float)n));
}