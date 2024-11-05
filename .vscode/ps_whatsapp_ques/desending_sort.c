int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int max=arr[i];
        int max_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>max){
                max=arr[j];
                max_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[max_index];
        arr[max_index]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}