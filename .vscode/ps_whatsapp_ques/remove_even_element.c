int main(){
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
}