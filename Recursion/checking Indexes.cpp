int firstIndex(int input[], int size, int x) {
  /* 
  */
	if(size==0)
        return -1;
    
    if(input[0]==x)
        return 0;
    
    int a = firstIndex(input+1,size-1,x);
    if(a!=-1)
        return a+1;
    else
        return a;
}
int lastIndex(int input[], int size, int x) {
  /* 
  */
	if(size==0)
        return -1;
    
    int a = lastIndex(input+1,size-1,x);
    if(a!=-1)
        return a+1;
    else if(input[0]==x)
        return 0;
    else
        return -1;
}