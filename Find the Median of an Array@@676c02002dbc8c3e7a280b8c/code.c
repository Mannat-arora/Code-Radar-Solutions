#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int left=0, right=n-1, mid;
    mid=right/2;
    printf("%d", arr[mid]);

}