int rightShift(int a[],int n){
    for (int i = n-1; i >=0; i--)
    {
        a[i+1]=a[i];
    }
    
}
