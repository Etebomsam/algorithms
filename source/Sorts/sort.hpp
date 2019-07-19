#pragma once
#include "../Functions/functions.hpp"


//I am goimg to copy the array of elements to LLRB Tree
//In-Order transverse the tree and copy it back into the array 
// average complexity of inserting n elements is O(nlogn)
//Worst case complexity will be the same as the average case 
// BST sort had a worse case complexity of O(n^2)

void LLRBTreeSort(int array[],int n){
    for (int i = 0; i < n; i++){
        rbTree.insert(array[i]);
    }

    rbTree.copySortedArr(array);
}




//void sort(int* array, int n);
//LLRBTreeSort(array,n);
