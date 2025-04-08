#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int isprime=0,count=0;
    for(int i=0; i<n; i++){
        if(arr[i]<2){
            isprime=0;
        }else{
            for(int j=2; j*j<=arr[i]; j++){
                if(arr[i]%j==0){
                    isprime =0;
                    break;
                }
            }
        }
        if(isprime){
            count++;
        }
    }
    printf("%d", count);
}