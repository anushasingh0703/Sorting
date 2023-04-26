# Sorting
# Bubble-Sorting

# Bubble Sorting
A sorting method known as bubble sort analyses two nearby elements and swaps them until the desired order is achieved.
In each iteration, each element of the array moves to the end.

Working of Bubble Sort 


Let's say we want to arrange each element in ascending order.

First Iteration (Compare and Swap)

Compare the first and second elements beginning with the first index.
They are switched if the first element is greater than the second.
Compare the third and second items now. If they are not in order, swap them.
The above process continues till the last element. 
The remaining iterations follow the same procedure.

The largest element among the unsorted elements is positioned at the end of each iteration.



![Bubble-sort](https://user-images.githubusercontent.com/124857399/234065653-c132d064-196d-48a7-8cf4-d8a2d1dc697d.png)

### BUBBLE SORT ALGORITHM


        bubbleSort(array)
          for i <- 1 to indexOfLastUnsortedElement-1
            if leftElement > rightElement
              swap leftElement and rightElement
        end bubbleSort



