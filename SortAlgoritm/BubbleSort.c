void BubbleSort(int array[])
{
    int size = sizeof(array) - 1;
    int swapped;
    for(int i = 0; i < size; i++)
    {
        swapped = 0;
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                swapped = 1;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}
