void my_sort_int_array(int *array, int size)
{
    int i = 1;
    int j;

    while (i != size) {
        if (array[i - 1] > array[i]) {
            j = array[i - 1];
            array[i - 1] = array[i];
            array[i] = j;
            i = 1;
	      } else
       	    i++;
    }
}
