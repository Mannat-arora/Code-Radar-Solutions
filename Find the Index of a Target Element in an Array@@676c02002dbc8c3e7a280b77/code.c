#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n],k;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int found =1;
    scanf("%d", &k);
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            printf("%d", i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }

}