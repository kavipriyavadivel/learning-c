int main(){
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int major_element=arr[0];
    int major_count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>major_count){
            major_count=count;
            major_element=arr[i];
        }
    }
    printf("%d",major_element);
}