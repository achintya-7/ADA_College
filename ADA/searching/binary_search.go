package main

import (
	"fmt"
	"sort"
)

func main() {
	var size int;
	var target int;

	fmt.Println("Enter array size")
	fmt.Scan(&size)
	var arr = make([] int, size)

	fmt.Println("Enter array")
	for i := 0; i < size; i++ {
		fmt.Scan(&arr[i])
	}

	fmt.Println("Enter target")
	fmt.Scan(&target)
	sort.Ints(arr)

	result := BinarySearch(arr, target)

	if result != -1 {
		fmt.Printf("The target is at index : %d and the target is %d \n", result+1, arr[result])
	} else {
		fmt.Println("Element not found")
	}

}

func BinarySearch(arr [] int, target int) int {
	start := 0;
	end := len(arr) - 1

	for start <= end {
		mid := (start + end)/2

		if(arr[mid] == target){
			return mid
		} else if (arr[mid] > target) {
			end = mid-1
		} else {
			start = mid+1
		}
	}

	return -1
}