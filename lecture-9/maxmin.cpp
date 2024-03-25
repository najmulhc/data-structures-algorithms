int max(int arr[], int length)
{
    int max = arr[0];
    for (int i = 1; i < length; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}