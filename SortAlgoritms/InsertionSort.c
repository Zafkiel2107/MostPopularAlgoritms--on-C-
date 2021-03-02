void InsertionSort(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(array[i] < array[j])
            {
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}
