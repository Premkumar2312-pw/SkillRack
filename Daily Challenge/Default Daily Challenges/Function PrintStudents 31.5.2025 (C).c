void printStudents(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        Student s = va_arg(args, Student);
        int total = s.maths + s.physics + s.chemistry;
        printf("%s %d\n", s.name, total);
    }

    va_end(args);
}