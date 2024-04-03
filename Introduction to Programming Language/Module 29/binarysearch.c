#include<stdio.h>
int main(){

    int min,max,key,mid;

    int n;
    scanf("%d", &n);


    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    min=0;
    max=n-1;
    mid=(min+max)/2;

    
   
while (min <= max) {
    if (arr[mid] < key)
      min = mid + 1;

    else if (arr[mid] == key) {
      printf("%d found at location %d.\n", key, mid+1);
      break;
    }

    else
      max = mid - 1;

    mid = (min + max)/2;
  }
  if (min > max)
    printf("Not found! %d isn't present in the list.\n", key);


    return 0;
}