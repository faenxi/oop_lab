#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <vector>
#include "Student.h"
#include "Course.h"
#include "Rector.h"

class University {
private:
    std::vector<Student> students;
    std::vector<Course*> courses;
    Rector rector;

public:
    University(Rector rector);
    ~University();

    void enrollStudent(const Student& student);
    void addCourse(Course* course);

    void showStudents() const;
    void showCourses() const;
    void showRector() const;
};

#endif