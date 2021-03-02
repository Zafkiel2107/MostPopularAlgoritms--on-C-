int BinarySearch(int array[], int searchIndex, int length)
{
    int low = 0, high = length - 1, middle;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (searchIndex < array[middle])
        {
            high = middle - 1;
        }
        else if (searchIndex > array[middle])
        {
            low = middle + 1;
        }
        else
        {
           return middle; 
        }
    }
}