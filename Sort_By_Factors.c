#include <stdio.h>
void factors(int);
int cnt=0,count=0,len;
void main()
{
    int arr[5]={6,9,8,15,98},i,temp;
    len=sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < len; i++) {
        temp=arr[i];
        count++;
        factors(temp);
    }
}
void factors(int num)
{
    int fact[100],j=0,length,arr[23],temp;
    for (int i = 1; i <= num; i++) {
        if(num%i==0)
        {
            arr[cnt]=i;
            cnt++;
        }
    }
    if (count==len) {
        //  printf("\n \n%d",cnt);
        for (int i = 0; i < cnt; i++) {
            for (int k = i + 1; k < cnt-i-1;) {https://github.com/KLNCE-ECE-Students-2021/Arrays/blob/main/Sort_Odd_Even
                if (arr[k] == arr[i]) {
                    for (int l = k; l < cnt; l++) {
                        arr[l] = arr[l + 1];
                    }
                    cnt--;
                }
                else {
                    k++;
                }
            }
        }
        printf("\n");
        for (int c = 0; c < cnt; c++) {
            printf("%d ", arr[c]);
        }
        for (int i = 0; i < cnt-1; ++i) {
            for (int k = i + 1; k < cnt-i-1; ++k) {
                if (arr[i] > arr[k]) {
                    temp = arr[i];
                    arr[i] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        printf("\n");
        for (int c = 0; c < cnt; c++) {
            printf("%d ", arr[c]);
        }
    }
}
