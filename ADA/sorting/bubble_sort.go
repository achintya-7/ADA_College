package main
import "fmt"

func main() {
	arr := [] int {3, 4, 1, 544, 2}
	fmt.Println(BubbleSort(arr))
} 

// will take an aray as parameter and return an array
func BubbleSort(arr[] int) [] int {
	for i := 0; i < len(arr) - 1; i++ {
		for j := 0; j < len(arr) - i - 1; j++ {
			if(arr[j] > arr[j+1]) {
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
	return arr
}