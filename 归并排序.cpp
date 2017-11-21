//first和end为num第一个元素和最后一个元素的索引
void merge_sort(int num[], int first, int end)
{
    if (first < end)
    {
        int mid = (first + end) / 2;
        merge_sort(num, first, mid);
        merge_sort(num, mid + 1, end);
        merge(num, first, mid, end);
    }
}

//合并序列[start, mid]、[mid+1, end]
void merge(int num[], int first, int mid, int end)
{
    int n1 = mid - first + 1;
    int n2 = end - mid;
    int* L = new int[n1];
    int* R = new int[n2];
    for(int i = 0; i < n1; i++)
    {
        L[i] = num[first + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = num[mid + j + 1];
    }

    int i = 0;
    int j = 0;
    int k = first;
    while(i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            num[k++] = L[i++];
        }
        else
        {
            num[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        num[k++] = L[i++];
    }

    while (j < n2)
    {
        num[k++] = R[j++];
    }

    delete [] L;
    delete [] R;
}