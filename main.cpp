#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
ofstream Student("Student.txt",ios::app);
ofstream Instructor("Instructor.txt",ios::app);
ofstream Department("Department.txt",ios::app);
ofstream Employee("Employee.txt",ios::app);
ofstream Course("Employee.txt",ios::app);
void WelcomeMessage(){
   cout<<"       -------------------------------------------------------";
   cout<<"\n\t\t** Welcome to Our University. **"<<endl;
   cout<<"\t\t ** An Education Government. **"<<endl;
   cout<<"       -------------------------------------------------------";
   cout<<endl;
}
void EndMessage(){
   cout<<"       -------------------------------------------------------";
   cout<<"\n\t               ** Thank you!!!. **"<<endl;
   cout<<"       -------------------------------------------------------";
   cout<<endl;
}
class person{
public:
    string  name;
    int age;
    int id;
    virtual void role()=0;
};
class manger:public person
{
    static manger* instance;
    int salary;
public:
    void role(){
        cout<<"The manager name is "<<name<<endl;
        cout<<"The manager age is "<<age<<endl;
        cout<<"The manager id is "<<id<<endl;

        cout<<"The manager salary is "<<salary<<endl;
        cout<<"The manager role is Manage"<<endl<<endl<<endl;
    }
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
    static manger* getinstance () {
        if (instance == nullptr) {
            instance = new manger();}
        return instance;
    }
};
manger* manger::instance=nullptr;

class student: public person{
public:
    float GPA;
    void role(){
        cout<<"The student name is "<<name<<endl;
        cout<<"The student age is "<<age<<endl;
        cout<<"The student id is "<<id<<endl;

        cout<<"The student GPA is "<<GPA<<endl;
        cout<<"The student role is study"<<endl<<endl<<endl;
    }
};
class instructor:public person{
public:
    void role(){
    cout<<"The instructor name is "<<name<<endl;
    cout<<"The instructor age is "<<age<<endl;
    cout<<"The instructor id is "<<id<<endl;

    cout<<"The instructor role is teach"<<endl<<endl<<endl;
    }
};
class employee:public person{
public:
    int salary;
    void role(){
        cout<<"The employee name is "<<name<<endl;
        cout<<"The employee age is "<<age<<endl;
        cout<<"The employee id is "<<id<<endl;

        cout<<"The employee role is work"<<endl<<endl<<endl;
    }
};
class course{
public:
    string title;
    int course_id;
    void details(){
        cout<<"The course title is "<<title<<endl;
        cout<<"The course id is "<<course_id<<endl<<endl<<endl;
    }
};
class department{
public:
    string title;
    vector<course>courses;
    void details(){
        cout<<"The department title is "<<title<<endl;
    }
    void add_course(course c1){
        courses.push_back(c1);
        Course<<c1.title<<endl;
        Course<<c1.course_id<<endl;
    }
};
class faculty{
public:
    string title;
    vector<student>Students;
    vector<instructor>Instructors;
    vector<employee>Employees;
    vector<department>Departments;
    void details(){
        cout<<"The faculty title is "<<title<<endl;
    }
    void add_student(student s1){
        Students.push_back(s1);
        Student<<s1.name<<endl;
        Student<<s1.age<<endl;
        Student<<s1.id<<endl;
        Student<<s1.GPA<<endl;
        }

    void add_instructor(instructor inst1){
        Instructors.push_back(inst1);
        Instructor<<inst1.name<<endl;
        Instructor<<inst1.age<<endl;
        Instructor<<inst1.id<<endl;

    }
    void add_employee(employee e1){
        Employees.push_back(e1);
        Employee<<e1.name<<endl;
        Employee<<e1.id<<endl;
        Employee<<e1.age<<endl;
        Employee<<e1.salary<<endl;

    }
    void add_department(department d1){
        Departments.push_back(d1);
        Department<<d1.title<<endl;
    }
    };
class university{
public:
    string title;
    vector<faculty>faculties;
    manger mange;
    void details(){
        cout<<"The university title is "<<title<<endl;
    }
    void add_faculty(faculty f1){
        faculties.push_back(f1);
    };
};
int main() {
    WelcomeMessage();
      cout<<"\tThe University list: "<<endl;
      cout<<"\t1-Manager."<<endl;
      cout<<"\t2-Student."<<endl;
      cout<<"\t3-Faculty."<<endl;
      cout<<"\t4-Department."<<endl;
      cout<<"\t5-Employee."<<endl;
      cout<<"\t6-Course."<<endl;
      cout<<"\t7-Instructor."<<endl;
      cout<<"\tPlease choose one option: ";
    employee e;
    instructor i;
    course c;
    student s;
    department d;
    faculty f;
    int choice;
    cin>>choice;
    if(choice==1){
    manger* M1 = manger::getinstance();
    int sal;
    cout<<"enter manager salary"<<endl;
    cin>>sal;
    M1->setsalary(sal);
    cout<<"Maanger Salary: "<<M1->getsalary()<<endl;
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t    ** The data has been added to the file!!!. **"<<endl;
    }
    else if(choice==2){
    string n;
    int a;
    int id1;
    float gpa;

    cout<<"enter student name"<<endl;
    cin>>n;
    cout<<"enter student age"<<endl;
    cin>>a;
    cout<<"enter student id"<<endl;
    cin>>id1;
    cout<<"enter student gpa"<<endl;
    cin>>gpa;
    s.name=n;
    s.age=a;
    s.id=id1;
    s.GPA=gpa;
    s.role();
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t    ** The data has been added to the file!!!. **"<<endl;
    }
    else if(choice==3){
    string T;
    cout<<"enter faculty title"<<endl;
    cin>>T;
    f.title=T;
    f.details();
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t     ** The data has been added to the file!!!. **"<<endl;
    }
    else if(choice==4){
    string T1;
    cout<<"enter department title"<<endl;
    cin>>T1;
    d.title=T1;
    d.details();
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t     ** The data has been added to the file!!!. **"<<endl;
    }
    else if(choice==5){
    string n1;
    cout<<"enter employee name"<<endl;
    cin>>n1;
    e.name=n1;
    int iD;
    int Age;
    cout<<"enter employee age"<<endl;
    cin>>Age;
    e.age=Age;
    int Salary;
    cout<<"enter employee id"<<endl;
    cin>>iD;
    e.id=iD;
    cout<<"enter employee salary"<<endl;
    cin>>Salary;
    e.salary=Salary;
    e.role();
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t     ** The data has been added to the file!!!. **"<<endl;
    }
    else if(choice==6){
    string ti;
    cout<<"enter course title"<<endl;
    cin>>ti;
    c.title=ti;
    int cID;
    cout<<"enter course id"<<endl;
    cin>>cID;
    c.course_id=cID;
    c.details();
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t     ** The data has been added to the file!!!. **"<<endl;
    }
    else if(choice==7){
    string nn;
    cout<<"enter instructor name"<<endl;
    cin>>nn;
    i.name=nn;
    int ag;
    cout<<"enter instructor age"<<endl;
    cin>>ag;
    i.age=ag;
    cout<<"enter instructor id"<<endl;
    int idd;
    cin>>idd;
    i.id=idd;
    i.role();
    cout<<"       -------------------------------------------------------";
    cout<<"\n\t     ** The data has been added to the file!!!. **"<<endl;
    }
    f.add_student(s);
    f.add_department(d);
    f.add_employee(e);
    f.add_instructor(i);
    d.add_course(c);
    Instructor.close();
    Student.close();
    Employee.close();
    Department.close();
    Course.close();

    EndMessage();
    return 0;
}

