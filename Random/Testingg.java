class Testingg {

    public static void main(String[] args) {
        int [] arr = {20, 40, 30, 40};

        List<Integer> list = new ArrayList();

        for (int num : arr) {
            list.add(num);
        }
    }

    public int[] arrayRankTransform(int[] arr) {
        List<Integer> list = new ArrayList();
        int [] ans = new int[arr.length];
        
        for (int num : arr) {
            list.add(num);
        }
        
        Collections.sort(list);
        
        for(int i = 0; i < arr.length; i++) {
            ans[i] = list.indexOf(arr[i])+1;
        }
        
        return ans;  
    }
}