

void insertionSort( int* arr, const int size, unsigned long& compCount, unsigned long& moveCount );
void mergeSort( int* arr, const int size, unsigned long& compCount, unsigned long& moveCount );
void mergeSort(int *arr, int first, int last, unsigned long &compCount, unsigned long &moveCount);
void quickSort( int* arr, const int size, unsigned long& compCount, unsigned long& moveCount );
void quickSort(int *arr, int first, int last, unsigned long &compCount, unsigned long &moveCount);
void partition(int *arr, int first, int last, int &pivotIdx, unsigned long &compCount, unsigned long &moveCount);
void merge(int *arr, int first, int mid, int last, unsigned long &compCount, unsigned long &moveCount);
void swap(int &a, int &b);
