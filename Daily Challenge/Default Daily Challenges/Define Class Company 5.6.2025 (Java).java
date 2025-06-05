class Company {
    private String domain;

    public Company(String domain) {
        this.domain = domain;
    }

    public String generateEmailId(String name, String designation) {
        return (name + "." + designation + "@" + domain).toLowerCase();
    }
}