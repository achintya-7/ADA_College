package main

import "fmt"

func main() {
	var size int
	var target int
	
	fmt.Println("Enter array size")
	fmt.Scan(&size)
	var arr = make([] int, size)

	fmt.Println("Enter array")
	for i := 0; i < size; i++ {
		fmt.Scan(&arr[i])
	}

	fmt.Println("Enter target")
	fmt.Scan(&target)

	result := LinearSearch(arr, target)

	if result != -1 {
		fmt.Printf("The target is at index : %d and the target is %d ", result+1, arr[result])
	} else {
		fmt.Println("Element not found")
	}

}

func LinearSearch(arr [] int, target int) int {
	for i := 0; i < len(arr); i++ {
		if arr[i] == target {
			return i
		}
	}
	return -1
}