void insert_sort(int *num, int len)
{
    for (int i = 1; i < len; i++)
    {
        int temp = num[i];
        int j = i;
        while (j > 0 && num[j - 1] > temp)
        {
            num[j] = num[j - 1];
            j--;
        }
        num[j] = temp;
    }
}