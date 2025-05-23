import java.util.*;

class RegistrationNumberGenerator {
    private Map<String, Integer> regCount;

    public RegistrationNumberGenerator() {
        regCount = new HashMap<>();
    }

    public String generatRegistrationNumber(int year, char section) {
        String key = year + "" + section;
        int count = regCount.getOrDefault(key, 0) + 1;
        regCount.put(key, count);

        return String.format("%04d%c%03d", year, section, count);
    }
}
