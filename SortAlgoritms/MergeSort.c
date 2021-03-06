void MergeSort(int *array, int size)
{
    int mid = size / 2;
    if (size % 2 == 1)
    {
        mid++;
    }
    int h = 1;
    int *c = (int*)malloc(size * sizeof(int));
    int step;
    while (h < size) 
    {
        step = h;
        int i = 0;
        int j = mid;
        int k = 0;
        while (step <= mid) 
        {
            while ((i < step) && (j < size) && (j < (mid + step))) 
            {
                if (array[i] < array[j])  
                {
                    c[k] = array[i];
                    i++; k++;
                }
                else
                {
                    c[k] = array[j];
                    j++; k++;
                }
            }
            while (i < step) 
            {
                c[k] = array[i];
                i++; k++;
            }
            while ((j < (mid + step)) && (j < size)) 
            {
                c[k] = array[j];
                j++; k++;
            }
            step = step + h;
        }
        h = h * 2;
        for (i = 0; i < size; i++)
        {
            array[i] = c[i];
        }
    }
}
