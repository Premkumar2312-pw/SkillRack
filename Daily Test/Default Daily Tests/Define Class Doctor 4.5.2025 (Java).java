class Doctor {
    private int startTime;
    private int endTime;
    private List<int[]> appointments;

    public Doctor(String start, String end) {
        this.startTime = toMinutes(start);
        this.endTime = toMinutes(end);
        this.appointments = new ArrayList<>();
    }

    public Boolean bookAppointment(String timeStr) {
        int time = toMinutes(timeStr);
        int appointmentEnd = time + 30;

        if (time < startTime || appointmentEnd > endTime) {
            return false;
        }

        for (int[] a : appointments) {
            int aStart = a[0], aEnd = a[1];
            if (!(appointmentEnd <= aStart || time >= aEnd)) {
                return false;
            }
        }

        appointments.add(new int[]{time, appointmentEnd});
        return true;
    }

    private int toMinutes(String time) {
        String[] parts = time.split(":");
        return Integer.parseInt(parts[0]) * 60 + Integer.parseInt(parts[1]);
    }
}