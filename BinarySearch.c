#include <stdio.h>
#include <stdlib.h>

// Binary Search 
int BinarySearch(int Arr[],int Size,int Targ)
{
    int mid=0,high=Size-1,low=0;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(Arr[mid]==Targ) return mid;
        else if(Arr[mid]>Targ) high = mid-1;
        else if(Arr[mid]<Targ) low = mid+1;
    }
    return -1;
}

int main(void)
{
    int Size=0,Targ=0;
    printf("Enter Size of Arr:");
    scanf("%d",&Size);
    if(Size<=0)
    {
        printf("Invalid Size");return 0;
    }
    int *Arr = (int*)malloc(sizeof(int)*Size);
    if(Arr==NULL)
    {
        printf("Memeory not allocated");
        return 0;
    }
    printf("Enter Sorted Array:\n");
    for(int i=0;i<Size;i++)scanf("%d",&Arr[i]);
    printf("Enter value of Targ:");
    scanf("%d",&Targ);
    int indx = BinarySearch(Arr,Size,Targ);
    if(indx!=-1)printf("%d=%d",Targ,indx);
    else printf("%d is not found",Targ);
    free(Arr);
    return 0;
}
