#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int left=0, mid;
    if(n%2==0){
        mid=n/2;
        printf("%d", (arr[mid]+arr[mid+1])/2);
    }else{
        mid=(n/2)+1;
        printf("%d", arr[mid]);
    }

}