#include <iostream>
#include <time.h>

#include "sorting.h"
#include <cstdlib>


using namespace std;


int main()
{

    int arrSize[] = {20000, 21000,22000,23000,24000};
    unsigned long compCount= 0;
    unsigned long moveCount = 0;
    clock_t startTime;
    double duration;

    cout<<"------------RANDOM ORDER------------"<<endl;

    for(int i = 0; i< 5; i++)
    {
        int testArr1[arrSize[i]],testArr2[arrSize[i]],testArr3[arrSize[i]];

        for(int j = 0; j <arrSize[i]; j++)
        {
            testArr1[j] = rand() %20000;
            testArr2[j] = testArr1[j];
            testArr3[j] = testArr1[j];
        }

        startTime = clock();
        mergeSort(testArr1,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For merge sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For merge sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For merge sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;
        moveCount = 0;
        compCount = 0;
        startTime = clock();
        quickSort(testArr2,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For quick sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For quick sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For quick sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;
        moveCount = 0;
        compCount = 0;
        startTime = clock();
        insertionSort(testArr3,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For insertion sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For insertion sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For insertion sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;

    }
    moveCount = 0;
    compCount = 0;
    cout<<"------------DESCENDING ORDER------------"<<endl;

    for(int i = 0; i< 5; i++)
    {
        int testArr1[arrSize[i]],testArr2[arrSize[i]],testArr3[arrSize[i]];

        for(int j = 0; j <arrSize[i]; j++)
        {
            testArr1[j] = arrSize[i]-j;
            testArr2[j] = testArr1[j];
            testArr3[j] = testArr1[j];
        }

        startTime = clock();
        mergeSort(testArr1,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For merge sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For merge sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For merge sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;
        moveCount = 0;
        compCount = 0;
        startTime = clock();
        quickSort(testArr2,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For quick sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For quick sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For quick sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;
        moveCount = 0;
        compCount = 0;
        startTime = clock();
        insertionSort(testArr3,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For insertion sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For insertion sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For insertion sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;

    }
    moveCount = 0;
    compCount = 0;


    cout<<"------------ASCENDING ORDER------------"<<endl;
    for(int i = 0; i< 5; i++)
    {
        int testArr1[arrSize[i]],testArr2[arrSize[i]],testArr3[arrSize[i]];

        for(int j = 0; j <arrSize[i]; j++)
        {
            testArr1[j] = j;
            testArr2[j] = testArr1[j];
            testArr3[j] = testArr1[j];
        }

        startTime = clock();
        mergeSort(testArr1,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For merge sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For merge sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For merge sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;
        moveCount = 0;
        compCount = 0;
        startTime = clock();
        quickSort(testArr2,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For quick sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For quick sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For quick sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;
        moveCount = 0;
        compCount = 0;
        startTime = clock();
        insertionSort(testArr3,arrSize[i],compCount,moveCount);
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        cout << "For insertion sort number of comparison with test case size "<<arrSize[i]<< " is "<<compCount<<"."<<endl;
        cout << "For insertion sort number of moves with test case size "<<arrSize[i]<< " is "<<moveCount<<"."<<endl;
        cout << "For insertion sort duration for test case size "<<arrSize[i]<< " is "<<duration<<"."<<endl;

    }

    return 0;
}
