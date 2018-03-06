class MergeSort {
public:
    int* mergeSort(int* A, int n) {
        // write code here
        process(A, 0, n - 1);
	    return A;
    }

    void process(int *A, int left, int right)
	{
        if (left == right)
        {
			return;
		}

        int mid = (left + right) / 2;
		process(A, left, mid);
		process(A, mid + 1, right);
		merge(A, left, mid, right);
	}

    void merge(int *A, int left, int mid, int right)
	{
		int *temp = new int[right - left + 1];
        int l = left;
        int r = mid + 1;
		int index  = 0;
		while (l <= mid && r <= right)
		{
			if (A[l]< A[r])
			{
				temp[index++] = A[l++];
			}
			else
			{
				temp[index++] = A[r++];
			}

		}
		while (l <= mid)
		{
			temp[index++] = A[l++];
		}
		while (r <= right)
		{
			temp[index++] = A[r++];
		}
		for (int i = 0; i < (right - left + 1); i++)
		{
			A[left + i] = temp[i];
		}
		delete[]temp;
		temp = NULL;
	}
};
