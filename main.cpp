#include <iostream>

using namespace std;

struct Specialization{
public:
    Specialization(){}
    explicit Specialization(string specialization){
        this->specialization = specialization;
    }
    Specialization(const Specialization& spec){
        specialization = spec.specialization;
    }
    string specialization;
};

struct Course{
public:
    Course(){}
    explicit Course(string course){
        this->course = course;
    }
    Course(const Course& cour){
        course = cour.course;
    }
    string course;
};

struct Week{
public:
    Week(){}
    Week(string week){
        this->week = week;
    }
    Week(const Week& wk){
        week = wk.week;
    }
    string week;
};

struct LectureTitle {
public:
    LectureTitle(const Specialization& spec, const Course& course, const Week& week){
        this->specialization = spec.specialization;
        this->course = course.course;
        this->week = week.week;
    }
    string specialization;
    string course;
    string week;
};

int main()
{
    return 0;
}
