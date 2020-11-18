int runningTime(vector<int> a) {
    int i,j,temp,c=0;
    for(i=1;i<a.size();i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
            c++;
        }
        a[j+1]=temp;
    }
    return c;
}
