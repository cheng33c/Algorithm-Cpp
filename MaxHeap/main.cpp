#include <iostream>
#include "Heap.h"

using namespace std;



int main() {

    MaxHeap<int> maxheap = MaxHeap<int>(100);
    //cout << maxheap.size() << endl;

    srand(time(NULL));
    for (int i = 0; i < 15; i ++)
        maxheap.insert(rand() % 100);

    while (!maxheap.isEmpty())
        cout << maxheap.extractMax() << " ";
    cout << endl;

    return 0;
}