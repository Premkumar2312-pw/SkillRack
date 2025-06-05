import java.util.*;
import java.util.stream.*;

class Folder {
    private Map<String, List<String>> filesByExtension;

    public Folder() {
        filesByExtension = new TreeMap<>();
    }

    public void addFile(String filename) {
        int lastDot = filename.lastIndexOf(".");
        if (lastDot != -1) {
            String name = filename.substring(0, lastDot);
            String ext = filename.substring(lastDot);
            filesByExtension.computeIfAbsent(ext, k -> new ArrayList<>()).add(name);
        }
    }

    public void printStatus() {
        filesByExtension.forEach((ext, names) ->
            System.out.println(ext + " - " + String.join(" ", names))
        );
    }
}