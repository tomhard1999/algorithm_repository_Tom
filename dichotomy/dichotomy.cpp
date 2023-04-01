#include<iostream>
using namespace std;
int n,q;
int main(){
    scanf("%d%d",&n,&q);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    while (q--)
    {
        int k;
        scanf("%d",&k);
        int l=0,r=n-1;
        while(l<r){
            int mid=l+r>>1;
            if(arr[mid]>=k) r=mid;
            else l=mid+1;
        }
        
        if(arr[l]!=k) printf("-1 -1\n");
        else{
            printf("%d ",l);
            int l=0,r=n-1;
            while (l<r)
            {
                int mid=l+r+1>>1;
                if(arr[mid]<=k) l=mid;
                else r=mid-1;
            }
            printf("%d \n",l);
        }
    }
    return 0;
}