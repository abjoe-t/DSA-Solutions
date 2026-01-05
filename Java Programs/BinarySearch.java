public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 10, 40};
        int x = 10;
        int l = 0, r = arr.length - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x) { System.out.println("Found"); return; }
            if (arr[m] < x) l = m + 1;
            else r = m - 1;
        }
    }
}
