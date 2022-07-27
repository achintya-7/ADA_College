package main

import "fmt"

func SelectionSort(arr[] int) [] int {
	for i := 0; i < len(arr) - 1; i++ {
		minIndex := i

		for j := i+1; j < len(arr); j++ {
			if arr[minIndex] > arr[j] {
				minIndex = j
			}
		}

		arr[minIndex], arr[i] = arr[i], arr[minIndex]
	}

	return arr
}

func main() {
	var size int
	fmt.Println("Enter your array size")	
	fmt.Scan(&size)

	var slice = make([] int, size)

	fmt.Println("Enter array inputs")
	for i := 0; i < size; i++ {
		fmt.Scan(&slice[i])
	}

	fmt.Println(SelectionSort(slice))
}
