#include <stddef.h>
#include <assert.h>

// Return the sum of all elements in the given array.  The array
// "arr" has "n" elements.
//
// Note that before, we used pointers to reference single variables
// in memory, but now we are using them to refer to many elements.
// The "arr" pointer points to the first element in the array in memory.
// Because pointers themselves don't carry any length information
// (like array objects do in Java), we generally have to pass in a
// length parameter to functions which use pointers to reference
// arrays.
int
array_sum(int *arr, int n)
{
	// iteratively add all values by incrementing index with loop
        // declaring variables inside a for loop wasn't valid C until C99
        int ans = 0;
        int i = 0;
        for (; i < n; i++) {
	  ans += arr[i];
        }
	return ans;
}
