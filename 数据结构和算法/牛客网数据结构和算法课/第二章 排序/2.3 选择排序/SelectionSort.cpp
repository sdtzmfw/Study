class SelectionSort {
public:
    int* selectionSort(int* A, int n) {
        // write code here
        int min = 0;
        int i,j;
        for(i=0; i<n-1; i++)
        {
            min = i;
            for(j=i+1; j<n; j++)
            {
                min = A[min] > A[j] ? j : min;
            }
            swap(A,i,min);
        }
        return A;
    }

    void swap(int* A, const int i, const int j)
    {
        int temp = 0;
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
};
