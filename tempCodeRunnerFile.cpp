 int main(){
        int d;
        cout<<"enter the number you want to rotate the array";
        cin>>d;
        int temp[d];
        int n;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-1-i] = temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}