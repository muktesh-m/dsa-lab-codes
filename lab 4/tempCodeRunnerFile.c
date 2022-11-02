#include<stdio.h>

int main() {
    int n;
    printf("Length:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int pos,ele;
    printf("Enter the position and element: ");
    scanf("%d %d", &pos, &ele);
    arr[n+1];
    for (int i = 0; i < n; i++){
        if(i==pos){
            for(int i=pos; i<=n; i++){
                arr[i] = arr[i+1];

        }
        break;

    }
    arr[pos]==ele;
    for(int i=0;i<n+1;i++){
        printf("%d\t", &arr[i]);
    }

    return 0;
}