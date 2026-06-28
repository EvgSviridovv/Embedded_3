int compression(int a[], int b[], int N) {
    if (N == 0) return 0;
    int idx = 0;
    int current = a[0];
    int count = 1;
    if (current == 1) 
        b[idx++] = 0;
    for (int i = 1; i < N; i++) 
        if (a[i] == current) 
            count++;
        else 
        {
            b[idx++] = count;
            current = a[i];
            count = 1;
        }
    b[idx++] = count;
    return idx;
}
