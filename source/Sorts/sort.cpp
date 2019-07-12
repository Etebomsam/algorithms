/*
Accept the array 
Build first heap 
    look at last node (node n) in tree 
    if current node has children, check if that node is greater than its child nodes
        if left child node is greater than parent node, 
            swap left child node and parent node
        else if right child node is greater than parent node
            swap right child node with parent node
        if a swap is made check that current node is greater than children using
        above process
    swap top node (node in first position) with last node (node n)
    
repeat build first heap process, now look at the n-1 node
continue process until n=0 ( looking at first node)
*/
void createHeap(int* arr,int heapSize, int index){

    int max = index; // current parent node
    int rightChild = 2 * index + 1;// right child of parent node
    int leftChild = 2 * index + 2; // left child of parent node
    //checks that left child is not out of bounds
    //checks if child is greater than head node 
    if (leftChild < heapSize && arr[leftChild] > arr[max]){
        max = leftChild;
    }
     //checks that right child is not out of bounds
     //checks if child is greater than head node
     if (rightChild < heapSize && arr[rightChild] > arr[max]){
        max = rightChild;
     }
     //check if the parent node is the max value
     //if parent node is not the max value then a swap will occur
     if (max != index){
        int swap = arr[max];
        arr[max] = arr[index];
        arr[index] = swap;
        
        // continue to create heap until heapsize is = 1
        createHeap(arr,heapSize, max);
     }
    

}
void heapsort(int* arr, int length){
    // create first max heap 
    for(int i = length/2 ; i >= 0; i--){
        createHeap(arr, length, i); 
    }
    // continue creating heaps until heapSize is 1
    for(int i = length-1; i >= 0;i--){
        // switch first node into the last position
        // this node is now sorted on the next position
        int swap = arr[i]; 
        arr[i] = arr[0];
        arr[0] = swap;
        createHeap(arr,i,0);


    }

}