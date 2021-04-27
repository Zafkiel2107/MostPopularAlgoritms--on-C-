void SelectionSort(int *array, int size)
{
    int min, temp;
    for (int i = 0; i < size - 1; i++) 
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            min = j;
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}