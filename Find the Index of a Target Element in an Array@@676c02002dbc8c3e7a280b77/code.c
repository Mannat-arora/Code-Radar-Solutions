#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n],k;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            return i;
            break;
        }
    }

}