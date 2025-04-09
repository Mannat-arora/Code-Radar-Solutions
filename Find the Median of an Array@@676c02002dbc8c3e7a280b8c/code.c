#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int left=arr[0], right=arr[n-1], mid;
    mid=left+(right-left)/2;
    printf("%d", mid);

}