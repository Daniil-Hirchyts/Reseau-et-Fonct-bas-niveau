int maximum(int *t, int n)
{
    int m = t[0];
    for (int i=1; i<n; i++){
         if (m < t[i])   
            m = t[i];    
    }

    return m;
}