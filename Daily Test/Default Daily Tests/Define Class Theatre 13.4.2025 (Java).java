class Theatre {
    Set<Integer> set;  
    public Theatre() {
        set = new HashSet<>();
    }
    
    public boolean book(int start, int end) {
        for (int i = start;i <= end;i++) {
            if (set.contains(i))
            return false;
        }
        for (int i = start;i <= end;i++) {
            set.add(i);
        }
        return true;
    }
}