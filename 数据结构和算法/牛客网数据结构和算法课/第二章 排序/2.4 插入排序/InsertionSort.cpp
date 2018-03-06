class InsertionSort {
public:
    int* insertionSort(int* A, int n) {
        // write code here
        int index = 0;
        for (int i = 1; i < n; i++)
        {
            index = i;
            while (index > 0)
            {
                if (A[index - 1] > A[index])
                {
                    swap(A, index - 1, index);
                    index--;
                }
                else
                {
                    break;
                }
            }
        }
        return A;
    }

    void swap(int* arr, int index1, int index2)
    {
        int tmp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = tmp;
    }
};
