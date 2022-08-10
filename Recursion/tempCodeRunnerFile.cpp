
	if(n==1)
        return;
    Mergesort(arr,n/2);
    Mergesort(arr+n/2,n-n/2);
    mergeArray(arr,n/2,n-n/2);
    
}   
int main()
{
    int n;