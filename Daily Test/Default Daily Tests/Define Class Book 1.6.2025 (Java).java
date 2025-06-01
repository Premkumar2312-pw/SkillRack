class Book {
    private int[] pageCounts;

    public Book(int totalPages) {
        pageCounts = new int[totalPages + 1];
    }

    public void read(int from, int to) {
        for (int i = from; i <= to; i++) {
            pageCounts[i]++;
        }
    }

    public void printMostOftenReadPages() {
        int max = 0;
        for (int count : pageCounts) {
            if (count > max) {
                max = count;
            }
        }
        for (int i = 1; i < pageCounts.length; i++) {
            if (pageCounts[i] == max) {
                System.out.print(i + " ");
            }
        }
    }
}