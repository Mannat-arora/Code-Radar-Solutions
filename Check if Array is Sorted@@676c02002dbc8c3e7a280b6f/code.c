#include <stdio.h>
int main(){
    int n,replace=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1]){
            replace =1;
        
        } else if(arr[i] == arr[i+1]){
            replace=1;
        } else if(n==1){
            replace 1;
        }
        else{
            replace =0;
        }
    }
    if(!replace){
        printf("Sorted");
    } else{
        printf("Not Sorted");
    }
}