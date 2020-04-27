#include <stdio.h>
#include <stdlib.h>


int main(void) {
    
    float arr[9];
    int i = 0;
    float max=min=arr[0];
    float S = 0;
    for (i=0;i<=9;i++){
        printf("Input your %d number of value: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i <10; i++){
        S += arr[i];
    }   
    for (i=1;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    for (i=1;i<10;i++){
        if(sub>=arr[i]){
            sub=arr[i];
        }
    }
    printf("The array average is: %f\n",(S/10) );
    printf("The max of avg is: %d\n",max);
    printf("The min of avg is: %d\n",min);
    return 0;
}