#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    //declaration
    int arr1[n];
    int arr2[n];
    //initilization
    for(int i=0;i<n;i++){
        scanf("%d ",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d ",&arr2[i]);
    }
    //logic
    int x,y;
    int flag=0;
    for(int i=0;i<n;i++){
        x=arr1[i];
        y=arr1[i+1];
        int a,b;
        for(int j=0;j<n;j++){
            if(arr2[j]==x){
                if(j!=n-1){
                    a=arr2[j];
                    b=arr2[j+1];
                }else{
                    a=arr2[j];
                    b=arr2[0];
                }
            }
        if(y!=b){
            flag=1;
            break;
        }
     }
    }
    if(flag==0){
        printf("matching");
    }else{
        printf("Not matching");
    }
}

/**
 * @brief 
 * 
 * 4
 * 6 9 8 4
 * 4 6 7 8
 */
