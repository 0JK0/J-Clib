# J-clib
## Description

This is a personal C library I created for learning purposes, it grew beyond my initial goals and now has some useful features

I'm not going to promise this library works flawlessly, but it should work well enough for my hobbyist projects

## Contents
### Array Manipulation

*   `array_reverse()`: Reverses the order of elements in an array.
    This function modifies the original array.
*   `array_print()`: Prints the contents of an array to the console.
    No return value, just prints what's inside.
*   `array_copy()`: Creates a copy of an existing array and returns it.
*   `array_fill()`: Fills an array with a specified value.
    Sets every element in the array to the same value.
*   `array_empty()`: Checks if an array is empty and returns true or false accordingly.

### String Manipulation

*   `string_length()`: Returns the length of a string.
    Just gives you how many characters are in the string.
*   `string_copy()`: Creates a copy of an existing string and returns it.
*   `string_reWrite()`: Replaces characters in a specified range within a string with new values from another source.

### Dynamic Arrays

*   `.push()` : Appends an element at the end of an array and returns its new size.
*   `.pop()`: Removes the last element from an array, returning it if requested, takes something off the end of your list or gives you back what was there.

### Dictionary/HashMap

*   `.get()`: Retrieves a value by its corresponding key in the dictionary.
*   `.set()`: Assigns values into a map at each entry point and associates provided value with its reference location in memory space within the set object for easy data retrieval process
*   `.delete()`: Deletes an item from a map given key using removal of entry associated with that identifier value stored inside memory structure - returns old info in place prior to new deletion action being performed

### Algorithms

*   `bubble_sort()` : Sorts items based on comparison between two elements at one position and another element from next available slot until complete pass has been executed; swaps adjacent pair when necessary.
*   `binary_search()`: Locates an item within sorted collection using sequential division into half-sized subsets to find target information efficiently through searching methods based on comparisons between found values against expected results desired key.
*   `quick_sort()`: Sorts items in ascending order using recursive partitioning technique based on pivot element selection within a subset that determines whether next iteration should proceed with smaller half only (left), larger one exclusively left behind once comparison yields result indicating which component dominates the rest as sorted elements accumulate gradually during each sorting process step executed concurrently by iterative loops iterating through whole array contents
    Another way to sort things. 
