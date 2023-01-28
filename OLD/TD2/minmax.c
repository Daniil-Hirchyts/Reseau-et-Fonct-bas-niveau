int minmax(int *t, int n, int *pmin, int *pmax)
{
    int max = t[0];
	int min = t[0];
    for (int i=1; i<n; i++){
        if (max < t[i])
            max = t[i];
		if (min > t[i])
			min = t[i];
    }
	*pmin = min;
	*pmax = max;
    return 0;
}