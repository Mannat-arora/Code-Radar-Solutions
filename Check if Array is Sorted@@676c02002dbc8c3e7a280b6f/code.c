#include <stdio.h>
int main(){
    int n,replace=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    if(n==1){
        printf("Sorted");
        return 0;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            replace =0;
            break;
        
        } else if(arr[i] == arr[i+1]){
            replace=1;
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
    return 0;
}