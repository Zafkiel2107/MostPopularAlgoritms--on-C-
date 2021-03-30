void QuickSort(int array[], int l, int r)
{
    int i = l, j = r, x = array[(l + r) / 2], temp;
 
    do {
        while (array[i] < x) i++;
        while (array[j] > x) j--;
 
        if (i <= j) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            i++;
            j--;
        }
    } while (i <= j);
 
    if (i < r)
        QuickSort(array, i, r);
    if (l < j)
        QuickSort(array, l, j);
}