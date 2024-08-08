using namespace std;
#include <iostream>
#include <fstream>
#include <limits>
#include <stdlib.h>
#include <thread>
#include "Database.h"



int counter;


class Exams{
    public:
        void Number_Creater(Database *student , string student_ID){
            int number = 0;
    
            char finded = 'n';
            system("clear");
            
            for(int x = 0 ; x < counter + 1 ; x++){
                
                if(student->uni_ID[x] == student_ID){
                    cout << "\033[1;32mEnter Total Credit Hours\033[0m";
                    
                    if(cin >> student->credit[x]){
                        cout << "\n";
                    }
                    
                    else{
                        cout << "Wrong input of Credit Hours!   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }
                    
                    
                    cout << "\033[1;31mEnter Subject 1 Marks:\033[0m";
                    if(cin >> student->subject_1_marks[x]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Subject 1 Marks !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }
                    
                    cout << "\033[1;31m\nEnter Subject 2 Marks\033[0m";
                    if(cin >> student->subject_2_marks[x]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Subject 2 Marks !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }
                    
                    
                    cout << "\033[1;31m\nEnter Subject 3 Marks\033[0m";
                    if(cin >> student->subject_3_marks[x]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Subject 3 Marks !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }
                    
                    
                    cout << "\033[1;31m\nEnter Subject 4 Marks\033[0m";
                    if(cin >> student->subject_4_marks[x]){
                        cout << "\n";
                    }
                    else{
                        cout << "\033[1;31mWrong input of Subject 4 Marks !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }

                    
                    cout << "\033[1;31m\nEnter Subject 5 Marks\033[0m";
                    if(cin >> student->subject_5_marks[x]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Subject 5 Marks !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }

                    
                    if(student->subject_1_marks[x] >= 85 && student->subject_1_marks[x] <= 100){
                        student->subject_1_grade[x] = 'A';
                        student->subject_1_points[x] = 4.0;
                    }
                    
                    else if(student->subject_1_marks[x] >= 70 && student->subject_1_marks[x] <= 84){
                        student->subject_1_grade[x] = 'B';
                        student->subject_1_points[x] = 3.0;
                    }
                    
                    else if(student->subject_1_marks[x] >= 55 && student->subject_1_marks[x] <= 69){
                        student->subject_1_grade[x] = 'C';
                        student->subject_1_points[x] = 2.0;
                    }
                    
                    else if(student->subject_1_marks[x] >= 40 && student->subject_1_marks[x] <= 54){
                        student->subject_1_grade[x] = 'D';
                        student->subject_1_points[x] = 1.0;
                    }
                    
                    else if(student->subject_1_marks[x] >= 0 && student->subject_1_marks[x] <= 39){
                        student->subject_1_grade[x] = 'F';
                        student->subject_1_points[x] = 0.0;
                    }
                    
                    
                    
                    if(student->subject_2_marks[x] >= 85 && student->subject_2_marks[x] <= 100){
                        student->subject_2_grade[x] = 'A';
                        student->subject_2_points[x] = 4.0;
                    }
                    
                    else if(student->subject_2_marks[x] >= 70 && student->subject_2_marks[x] <= 84){
                        student->subject_2_grade[x] = 'B';
                        student->subject_2_points[x] = 3.0;
                    }
                    
                    else if(student->subject_2_marks[x] >= 55 && student->subject_2_marks[x] <= 69){
                        student->subject_2_grade[x] = 'C';
                        student->subject_2_points[x] = 2.0;
                    }
                    
                    else if(student->subject_2_marks[x] >= 40 && student->subject_2_marks[x] <= 54){
                        student->subject_2_grade[x] = 'D';
                        student->subject_2_points[x] = 1.0;
                    }
                    
                    else if(student->subject_2_marks[x] >= 0 && student->subject_2_marks[x] <= 39){
                        student->subject_2_grade[x] = 'F';
                        student->subject_2_points[x] = 0.0;
                    }
                    
                    
                      
                    
                    
                    if(student->subject_3_marks[x] >= 85 && student->subject_3_marks[x] <= 100){
                        student->subject_3_grade[x] = 'A';
                        student->subject_3_points[x] = 4.0;
                    }
                    
                    else if(student->subject_3_marks[x] >= 70 && student->subject_3_marks[x] <= 84){
                        student->subject_3_grade[x] = 'B';
                        student->subject_3_points[x] = 3.0;
                    }
                    
                    else if(student->subject_3_marks[x] >= 55 && student->subject_3_marks[x] <= 69){
                        student->subject_3_grade[x] = 'C';
                        student->subject_3_points[x] = 2.0;
                    }
                    
                    else if(student->subject_3_marks[x] >= 40 && student->subject_3_marks[x] <= 54){
                        student->subject_3_grade[x] = 'D';
                        student->subject_3_points[x] = 1.0;
                    }
                    
                    else if(student->subject_3_marks[x] >= 0 && student->subject_3_marks[x] <= 39){
                        student->subject_3_grade[x] = 'F';
                        student->subject_3_points[x] = 0.0;
                    }




                    if(student->subject_4_marks[x] >= 85 && student->subject_4_marks[x] <= 100){
                        student->subject_4_grade[x] = 'A';
                        student->subject_4_points[x] = 4.0;
                    }
                    
                    else if(student->subject_4_marks[x] >= 70 && student->subject_4_marks[x] <= 84){
                        student->subject_4_grade[x] = 'B';
                        student->subject_4_points[x] = 3.0;
                    }
                    
                    else if(student->subject_4_marks[x] >= 55 && student->subject_4_marks[x] <= 69){
                        student->subject_4_grade[x] = 'C';
                        student->subject_4_points[x] = 2.0;
                    }
                    
                    else if(student->subject_4_marks[x] >= 40 && student->subject_4_marks[x] <= 54){
                        student->subject_4_grade[x] = 'D';
                        student->subject_4_points[x] = 1.0;
                    }
                    
                    else if(student->subject_4_marks[x] >= 0 && student->subject_4_marks[x] <= 39){
                        student->subject_4_grade[x] = 'F';
                        student->subject_4_points[x] = 0.0;
                    }




                    if(student->subject_5_marks[x] >= 85 && student->subject_5_marks[x] <= 100){
                        student->subject_5_grade[x] = 'A';
                        student->subject_5_points[x] = 4.0;
                    }
                    
                    else if(student->subject_5_marks[x] >= 70 && student->subject_5_marks[x] <= 84){
                        student->subject_5_grade[x] = 'B';
                        student->subject_5_points[x] = 3.0;
                    }
                    
                    else if(student->subject_5_marks[x] >= 55 && student->subject_5_marks[x] <= 69){
                        student->subject_5_grade[x] = 'C';
                        student->subject_5_points[x] = 2.0;
                    }
                    
                    else if(student->subject_5_marks[x] >= 40 && student->subject_5_marks[x] <= 54){
                        student->subject_5_grade[x] = 'D';
                        student->subject_5_points[x] = 1.0;
                    }
                    
                    else if(student->subject_5_marks[x] >= 0 && student->subject_5_marks[x] <= 39){
                        student->subject_5_grade[x] = 'F';
                        student->subject_5_points[x] = 0.0;
                    }
                    
                    finded = 'y';
                    float grade_points = (student->subject_1_points[x] * 1) + (student->subject_2_points[x] * 1) + (student->subject_3_points[x] * 3)
                    + (student->subject_4_points[x] * 3) + (student->subject_5_points[x] * 3);
                    
                    student->gpa[x] = grade_points / student->credit[x];
                    system("clear");
                    
                    cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t\t---------------------MARKS UPLOADED!!!-----------------------\033[0m\n\n\n\n";
                    this_thread::sleep_for(chrono::seconds(2));
                    cout << "Going To Main MENU in 3 seconds"<<endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "Main MENU => 2sec"<<endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "Main MENU => 1sec"<<endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    
                    break;
                }
                
            }
            
            if(finded != 'y'){
                system("clear");
                cout << "\n\n\n\t\tStudent Not Found!!!!\n\n\n\n";
            }
            
            string u;
            cout << "\n\nEnter any key to Go-to Main Menu:";
            getline(cin , u);
        
        }

        
        void Attendance(Database *st){
            string ID;
            char finded;
            system("clear");
            
            cout << "\033[1;31mEnter Student UNIVERSITY ID:\033[0m";
            cin.ignore();
            getline(cin , ID);
            
            for(int i = 0; i < counter + 1; i++){
                if(st->uni_ID[i] == ID){
                   
                    cout << "\033[1;31m\nENTER Subject 1 Attendance in Percentage   ('%' sign Excluded):\033[0m";
                    if(cin >> st->sub1_attendance[i]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Attendance 1 !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }
                    
                    cout << "\033[1;31m\nENTER Subject 2 Attendance in Percentage   ('%' sign Excluded):\033[0m";
                    if(cin >> st->sub2_attendance[i]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Attendance 2 !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }

                    cout << "\033[1;31m\nENTER Subject 3 Attendance in Percentage   ('%' sign Excluded):\033[0m";
                    if(cin >> st->sub3_attendance[i]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Attendance 3 !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }

                    cout << "\033[1;31m\nENTER Subject 4 Attendance in Percentage   ('%' sign Excluded):\033[0m";
                    if(cin >> st->sub4_attendance[i]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Attendance 4 !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    }

                    cout << "\033[1;31m\nENTER Subject 5 Attendance in Percentage   ('%' sign Excluded):\033[0m";
                    if(cin >> st->sub5_attendance[i]){
                        cout << "\n";
                    }
                    else{
                        cout << "Wrong input of Attendance 5 !   \n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                        finded = 'y';
                        break;
                    }
                    finded = 'y';
                    system("clear");
                    cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t-------------------ATTENDANCE UPLOADED-------------------\033[0m\n\n\n\n";

                }
            }
            
            if(finded != 'y'){
                system("clear");
                cout << "\nStudent Not Found!!!!\n";
            }
            this_thread::sleep_for(chrono::seconds(2));
            cout << "Going To Main MENU in 3 seconds"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 2sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 1sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            
        }

        void Attendance_checker(Database *obj , string student_ID){
            for(int x = 0; x < counter; x++){
                if(obj->uni_ID[x] == student_ID){
                    
                    if(obj->sub1_attendance[x] < 75.0){
                        obj->attendance_warn_1[x] = "Low Attendence Warning!!!";
                    }
                    else{
                        obj->attendance_warn_1[x] = "No Low Attendence Warning ";
                    }
                    
                    if(obj->sub2_attendance[x] < 75.0){
                        obj->attendance_warn_2[x] = "Low Attendence Warning!!!";
                    }
                    else{
                        obj->attendance_warn_2[x] = "No Low Attendence Warning ";
                    }
                    
                    if(obj->sub3_attendance[x] < 75.0){
                        obj->attendance_warn_3[x] = "Low Attendence Warning!!!";
                    }
                    else{
                        obj->attendance_warn_3[x] = "No Low Attendence Warning ";
                    }
                    
                    if(obj->sub4_attendance[x] < 75.0){
                        obj->attendance_warn_4[x] = "Low Attendence Warning!!!";
                    }
                    else{
                        obj->attendance_warn_4[x] = "No Low Attendence Warning ";
                    }
                    
                    if(obj->sub5_attendance[x] < 75.0){
                        obj->attendance_warn_5[x] = "Low Attendence Warning!!!";
                    }
                    else{
                        obj->attendance_warn_5[x] = "No Low Attendence Warning ";
                    }
                }
            }

        }


};


class Bus_Management{
    public:
        void Provide_transport(Database *obj){
            system("clear");
            
            string temp;
            char finded;
            
            cout << "\033[1;32mEnter Student University ID:\033[0m";
            cin.ignore();
            getline(cin , temp);
            
            for(int x = 0 ; x < counter +1 ; x++){
                
                if(temp == obj->uni_ID[x] && obj->transport_avl[x] == 'n'){
                    cout << "\033[1;32mStudent INFO:\033[0m"<<endl;
                    cout << "\033[1;32mStudent Name:\033[0m"<<obj->students_names[x]<<endl;
                    cout << "\033[1;32mStudent Department:\033[0m"<<obj->department[x]<<endl;
                    cout << "\033[1;32mStudent Class:\033[0m"<<obj->class_name[x]<<endl;
                    cout << "\033[1;32mSemester:\033[0m"<<obj->semester[x]<<"\n\n";
                    cout << "\033[1;32mEnter Bus Route Number:\033[0m";
                    cin >> obj->bus_route[x];
                    finded = 'y';
                    obj->transport_avl[x] = 'y';
                    system("clear");
                    cout << "\033[1;35m\n\n\n-----------Student:  "<<obj->students_names[x]<< "  Can Now Use Transport Service------------\n\n\n\n\033[0m"<<endl;
                    break;
                }
            }
            
            if(finded != 'y'){
                system("clear");
                cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t\t--------------------Student of ID:"<<temp<<" Not Found---------------------\033[0m\n\n\n\n";
            }
            
            this_thread::sleep_for(chrono::seconds(2));
            cout << "Going To Main MENU in 3 seconds"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 2sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 1sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            
        }

        void Remove_transport(Database *obj){
            system("clear");
            
            string temp;
            char finded;
            
            cout << "\033[1;31mEnter Student University ID:\033[0m";
            cin.ignore();
            getline(cin , temp);
            
            for(int x = 0 ; x < counter +1 ; x++){
                
                if(temp == obj->uni_ID[x] && obj->transport_avl[x] == 'y'){
                    cout << "\033[1;31mStudent INFO:\033[0m"<<endl;
                    cout << "\033[1;31mStudent Name:\033[0m"<<obj->students_names[x]<<endl;
                    cout << "\033[1;31mStudent Department:\033[0m"<<obj->department[x]<<endl;
                    cout << "\033[1;31mStudent Class:\033[0m"<<obj->class_name[x]<<endl;
                    cout << "\033[1;31mSemester:\033[0m"<<obj->semester[x]<<"\n\n";
                    finded = 'y';
                    obj->transport_avl[x] = 'n';
                    cout << "\nStudent "<<obj->students_names[x]<< " Now Can't Use Transport Service\n\n\n\n"<<endl;
                    break;
                }
            }
            
            if(finded != 'y'){
                system("clear");
                cout << "\nStudent of ID:"<<temp<<" Not Found or Not Using Transport.\n\n\n\n";
            }
            
            this_thread::sleep_for(chrono::seconds(2));
            cout << "Going To Main MENU in 3 seconds"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 2sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 1sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
        
        }
    
    protected:
        bool transport_finder(Database *obj , string temp_ID){
            for(int x = 0; x < counter+1 ; x++){
                if(obj->transport_avl[x] == 'y' && temp_ID == obj->uni_ID[x]){
                    return true;
                }
            }    
            return false;
        }
};


class student_data : public Bus_Management , public Exams{
    public:
        void add_student(Database *obj){
            system("clear");
            cout << "\033[1;31m\n\nEnter Student Name:\033[0m";
            
            string emp;
            getline(cin , emp);

            for(int x = 0 ; x < emp.length() ; x++){
                if(emp[x] >= 'A' && emp[x] <= 'Z' || emp[x] >= 'a' && emp[x] <= 'z' || emp[x] == ' '){
                    obj->students_names[counter] = emp;
                }
                else{
                    cout << "\n\033\t[1;31mInvalid Naming Format.\033[0m\n";
                    cout << "\tENTER AGAIN STUDENT DATA\n";
                    this_thread::sleep_for(chrono::seconds(4));
                    return add_student(obj);
                    cin.ignore();
                }
            }

            
            cout << "\n\033[1;31mEnter Department:\033[0m";
            getline(cin , obj->department[counter]);
            

            cout << "\033[1;31m\nEnter Class Name:\033[0m";
            getline(cin , obj->class_name[counter]);

            cout << "\033[1;31m\nEnter Student Semester:\033[0m";
            getline(cin , obj->semester[counter]);

            cout << "\033[1;31m\nEnter Student University ID\nEXAMPLE: SU74-BSROM-F00-000   \nEnter Here:\033[0m\033[0m";
            string temp;
            getline(cin , temp); 

            for(int x = 0 ; x < counter + 1 ; x++){
                if(obj->uni_ID[x] == temp){
                    cout << "\n\tUNIVERSITY ID ALREADY EXISTS\n";
                    cout << "\tPLEASE ENTER UNIQUE UNIVERSITY ID\n";
                    cout << "\tENTER AGAIN STUDENT DATA\n";
                    this_thread::sleep_for(chrono::seconds(4));
                    return add_student(obj);
                }
            }
            obj->uni_ID[counter] = temp; 

            system("clear");
            cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t\t------------------Student Data Uploaded------------------\033[0m\n\n\n\n";
            counter ++;  
            cout << "Going To Main MENU in 3 seconds"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 2sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 1sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));

        }

        void Remove_Student(Database *obj){
            system("clear");
            
            string temp_ID;
            char finded;
            cout << "Enter Student ID to Remove: ";
            cin.ignore();
            getline(cin , temp_ID);
            
            for(int x = 0; x < counter+1 ; x++){
                if(obj->uni_ID[x] == temp_ID){
                    cout << "\033[1;31mStudent ID:"<<obj->uni_ID[x]<<" Removed.\033[0m"<<endl;
                    obj->class_name[x] = " ";
                    obj->department[x] = " ";
                    obj->students_names[x] = " ";
                    obj->semester[x] = " ";
                    obj->uni_ID[x] = " ";
    
                    obj->transport_avl[x] = 'n';
                    obj->subject_1_grade[x] =' ';
                    obj->subject_2_grade[x] =' ';
                    obj->subject_3_grade[x] =' ';
                    obj->subject_4_grade[x] =' ';
                    obj->subject_5_grade[x] =' ';
                    obj->subject_1_marks[x] =0;
                    obj->subject_2_marks[x] =0;
                    obj->subject_3_marks[x] =0;
                    obj->subject_4_marks[x] =0;
                    obj->subject_5_marks[x] =0;
                    obj->subject_1_points[x] = 0;
                    obj->subject_2_points[x] = 0;
                    obj->subject_3_points[x] = 0;
                    obj->subject_4_points[x] = 0;
                    obj->subject_5_points[x] = 0;
                    obj->gpa[x] = 0.0;
                    obj->attendance_warn_1[x] = "";
                    obj->attendance_warn_2[x] = "";
                    obj->attendance_warn_3[x] = "";
                    obj->attendance_warn_4[x] = "";
                    obj->attendance_warn_5[x] = "";
                    obj->sub1_attendance[x] = 0;
                    obj->sub2_attendance[x] = 0;
                    obj->sub3_attendance[x] = 0;
                    obj->sub4_attendance[x] = 0;
                    obj->sub5_attendance[x] = 0;


                    finded = 'y';
                    
                    break;
                }
            }
            
            if(finded != 'y'){
                cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t\t------------------Student Not Found------------------\033[0m\n\n\n\n";
            }
            
            this_thread::sleep_for(chrono::seconds(2));
            cout << "\n\nGoing To Main MENU in 3 seconds"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 2sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 1sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
        
        }

        void  search_student(Database *obj){
            char finded = 'Y';
            string show;
            string temp_ID;
            system("clear");
            
            cout << "\033[1;31mEnter Student University ID:";
            cin.ignore();
            getline(cin , temp_ID);

            for(int i = 0; i < counter+1; i++){
                if(temp_ID == obj->uni_ID[i]){
                    cout << "\033[1;31m\nStudent Name:\033[0m" << obj->students_names[i] << endl;
                    cout << "\033[1;31m\nDepartment:\033[0m" << obj->department[i] << endl;
                    cout << "\033[1;31m\nClass Name:\033[0m" << obj->class_name[i] << endl;
                    cout << "\033[1;31m\nSemester:\033[0m"<<obj->semester[i]<<endl;
                    cout << "\033[1;31m\nUniversity ID:\033[0m" << obj->uni_ID[i] << endl;
                    Exams::Attendance_checker(obj,temp_ID);
                    cout << "\033[1;31m\n\nSubject 1 Marks:\033[0m"<<obj->subject_1_marks[i]<<"\033[1;33m   Grade:\033[0m"<<obj->subject_1_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub1_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_1[i]<<endl;
                    cout << "\033[1;31mSubject 2 Marks:\033[0m"<<obj->subject_2_marks[i]<<" \033[1;33m  Grade:\033[0m"<<obj->subject_2_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub2_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_2[i]<<endl;
                    cout << "\033[1;31mSubject 3 Marks:\033[0m"<<obj->subject_3_marks[i]<<" \033[1;33m  Grade:\033[0m"<<obj->subject_3_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub3_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_3[i]<<endl;
                    cout << "\033[1;31mSubject 4 Marks:\033[0m"<<obj->subject_4_marks[i]<<" \033[1;33m  Grade:\033[0m"<<obj->subject_4_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub4_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_4[i]<<endl;
                    cout << "\033[1;31mSubject 5 Marks:\033[0m"<<obj->subject_5_marks[i]<<"  \033[1;33m Grade:\033[0m"<<obj->subject_5_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub2_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_5[i]<<endl;
                    cout << "\033[1;31m\nGPA:\033[0m"<<obj->gpa[i]<<"\n\n\n";
                    
                    if(Bus_Management::transport_finder(obj,temp_ID) == true){
                            cout << "\033[1;31m\n\nUsing Transport:\033[0m" << "Yes" << endl;
                            cout << "\033[1;31mBus Route Number:\033[0m"<<obj->bus_route[i]<<"\n\n\n\n";
                    }
                    else{
                            cout << "\033[1;31m\n\nUsing Transport:\033[0m"<<"NO"<<endl;
                    }
                    finded = 'y';
                    break;
                }

                
            }
            
            if(finded != 'y'){
                cout << "Student Not Found";
            }
            string u;
            cout << "\n\nEnter any key to Go-to Main Menu:";
            getline(cin , u);
            
        }    

        void show_marks(Database *obj){
            string temp_ID;
            system("clear");
            
            cout << "\033[1;35mEnter Student University ID:\033[0m";
            cin.ignore();
            getline(cin , temp_ID);
            char finded = 'n';
           
            for(int i = 0 ; i < counter +1  ; i++){
                if(obj->uni_ID[i] == temp_ID){
                    system("clear");
                        Exams::Attendance_checker(obj,temp_ID);
                        cout << "\033[1;35mStudent INFO:\033[0m"<<endl;
                        cout << "\033[1;35mStudent NAME:\033[0m"<<obj->students_names[i]<<endl; 
                        cout << "\033[1;35mClass Name:\033[0m" << obj->class_name[i]<<endl;
                        cout << "\033[1;35mSemester:\033[0m"<<obj->semester[i]<<endl;
                        cout << "\033[1;35mUniversity ID:\033[0m" << obj->uni_ID[i]<<endl;
                        cout << "\033[1;35m\n\nSubject 1 Marks:\033[0m"<<obj->subject_1_marks[i]<<"\033[1;31m   Grade:\033[0m"<<obj->subject_1_grade[i]<<"\033[1;31m\t\tAttendance:\033[0m"<<obj->sub1_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_1[i]<<endl;
                        cout << "\033[1;35mSubject 2 Marks:\033[0m"<<obj->subject_2_marks[i]<<"  \033[1;31m Grade:\033[0m"<<obj->subject_2_grade[i]<<"\033[1;31m\t\tAttendance:\033[0m"<<obj->sub2_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_2[i]<<endl;
                        cout << "\033[1;35mSubject 3 Marks:\033[0m"<<obj->subject_3_marks[i]<<"  \033[1;31m Grade:\033[0m"<<obj->subject_3_grade[i]<<"\033[1;31m\t\tAttendance:\033[0m"<<obj->sub3_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_3[i]<<endl;
                        cout << "\033[1;35mSubject 4 Marks:\033[0m"<<obj->subject_4_marks[i]<<"   \033[1;31mGrade:\033[0m"<<obj->subject_4_grade[i]<<"\033[1;31m\t\tAttendance:\033[0m"<<obj->sub4_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_4[i]<<endl;
                        cout << "\033[1;35mSubject 5 Marks:\033[0m"<<obj->subject_5_marks[i]<<"   \033[1;31mGrade:\033[0m"<<obj->subject_5_grade[i]<<"\033[1;31m\t\tAttendance:\033[0m"<<obj->sub2_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_5[i]<<endl;
                        cout << "\033[1;35m\nGPA:\033[0m"<<obj->gpa[i]<<"\n\n\n";
                        finded = 'y';
                        break;
                }
            }
            
            if(finded != 'y'){
                cout << "Student Not Found!!!";
            }

            string u;
            cout << "\n\nEnter any key to Go-to Main Menu:";
            getline(cin , u);
        }

        void show_transport(Database *obj){
            string temp_ID;
            system("clear");
            
            cout << "Enter Student University ID:";
            cin.ignore();
            getline(cin , temp_ID);
            char finded = 'n';
            
            for(int i = 0 ; i < counter +1  ; i++){
                if(obj->uni_ID[i] == temp_ID){
                    system("clear");
                    if(Bus_Management::transport_finder(obj,temp_ID) == true){
                        cout << "\033[1;31m\nStudent Name:\033[0m" << obj->students_names[i] << endl;
                        cout << "\033[1;31m\nDepartment:\033[0m" << obj->department[i] << endl;
                        cout << "\033[1;31m\nClass Name:\033[0m" << obj->class_name[i] << endl;
                        cout << "\033[1;31m\nSemester:\033[0m"<<obj->semester[i]<<endl;
                        cout << "\033[1;31m\nUniversity ID:\033[0m" << obj->uni_ID[i] << endl;
                        cout << "\n\nUsing Transport:" << "Yes" << endl;
                        cout << "Bus Route Number:"<<obj->bus_route[i]<<"\n\n\n\n";
                    }
                    else{
                        cout << "\033[1;31m\nStudent Name:\033[0m" << obj->students_names[i] << endl;
                        cout << "\033[1;31m\nDepartment:\033[0m" << obj->department[i] << endl;
                        cout << "\033[1;31m\nClass Name:\033[0m" << obj->class_name[i] << endl;
                        cout << "\033[1;31m\nSemester:\033[0m"<<obj->semester[i]<<endl;
                        cout << "\033[1;31m\nUniversity ID:\033[0m" << obj->uni_ID[i] << endl;
                        cout << "\n\nUsing Transport:"<<"NO\n\n\n\n"<<endl;
                    }
                    finded = 'y';
                    break;
                }
            }
            
            if(finded != 'y'){
                cout << "\n\nStudent Not Found!!!";
            }
            
            this_thread::sleep_for(chrono::seconds(2));
            cout << "\nGoing To Main MENU in 3 seconds"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 2sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Main MENU => 1sec"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
        }


        void show_students(Database *obj){
            system("clear");
            cout << "Students List:" << endl;
            
            for(int i = 0; i <= counter-1; i++){
                    cout << "Student No " << i+1 << endl;
                    cout << "\033[1;31m\nStudent Name:\033[0m" << obj->students_names[i] << endl;
                    cout << "\033[1;31m\nDepartment:\033[0m" << obj->department[i] << endl;
                    cout << "\033[1;31m\nClass Name:\033[0m" << obj->class_name[i] << endl;
                    cout << "\033[1;31m\nSemester:\033[0m"<<obj->semester[i]<<endl;
                    cout << "\033[1;31m\nUniversity ID:\033[0m" << obj->uni_ID[i] << endl;
                    cout << "\033[1;31m\n\nSubject 1 Marks:\033[0m"<<obj->subject_1_marks[i]<<"\033[1;33m   Grade:\033[0m"<<obj->subject_1_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub1_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_1[i]<<endl;
                    cout << "\033[1;31mSubject 2 Marks:\033[0m"<<obj->subject_2_marks[i]<<" \033[1;33m  Grade:\033[0m"<<obj->subject_2_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub2_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_2[i]<<endl;
                    cout << "\033[1;31mSubject 3 Marks:\033[0m"<<obj->subject_3_marks[i]<<" \033[1;33m  Grade:\033[0m"<<obj->subject_3_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub3_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_3[i]<<endl;
                    cout << "\033[1;31mSubject 4 Marks:\033[0m"<<obj->subject_4_marks[i]<<" \033[1;33m  Grade:\033[0m"<<obj->subject_4_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub4_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_4[i]<<endl;
                    cout << "\033[1;31mSubject 5 Marks:\033[0m"<<obj->subject_5_marks[i]<<"  \033[1;33m Grade:\033[0m"<<obj->subject_5_grade[i]<<"\033[1;33m\t\tAttendance:\033[0m"<<obj->sub2_attendance[i]<<"%"<<"\t"<<obj->attendance_warn_5[i]<<endl;
                    cout << "\033[1;31m\nGPA:\033[0m"<<obj->gpa[i]<<"\n\n\n";
                    cout << "\n\n\n\n";
            }
           
            string u;
            cout << "\n\nEnter any key to Go-to Main Menu:";
            cin.ignore();
            getline(cin , u);
            
        }
};



class main_start:public Database, public student_data{
    public:

        main_start():Database(){
            counter = 0;
            ifstream infile("counter.DAT", ios::binary); 
            infile.read( reinterpret_cast<char*>(&counter), sizeof(counter) );
            
        }
        
        bool admin(string us , string password){
            string user = "admin";
            string pass = "123456";
            if(us == user && password == pass){
                return true;
            }
            else{
                return false;
            }

        }
        
        void main_code(Database *obj){
            int start = 0;
            string choice;
            bool user = true;
            cout << "\033[1;32m";
            cout << R"(
                                                                                                ██████  ██ ███    ██  ██ 
                                                                                                     ██ ██ ████   ██ ███ 
                                                                                                 █████  ██ ██ ██  ██  ██ 
                                                                                                     ██ ██ ██  ██ ██  ██ 
                                                                                                ██████  ██ ██   ████  ██ 
                            
                         
)";
                cout << R"(
                                                                                  █████  ██████  ██    ██  █████  ███    ██  ██████ ███████ 
                                                                                 ██   ██ ██   ██ ██    ██ ██   ██ ████   ██ ██      ██      
                                                                                 ███████ ██   ██ ██    ██ ███████ ██ ██  ██ ██      █████   
                                                                                 ██   ██ ██   ██  ██  ██  ██   ██ ██  ██ ██ ██      ██      
                                                                                 ██   ██ ██████    ████   ██   ██ ██   ████  ██████ ███████ 
                                                           
                                                           
)";
cout << "\033[0m\n";
cout << R"(                                                                                              🇲​ ​ 🇦 ​​🇳 ​​🇦 ​​🇬 ​​🇪 ​​🇲 ​​🇪 ​​🇳 ​​🇹  ​🇸 ​​🇾 ​​🇸 ​​🇹 ​​🇪 ​​🇲​)";
            
            while(user){
                
                if(start == 0){
                    cout << "\n\033[1;35m\n\n\n\n\t\t\t\t\t\t\t\t\t     -----------------------Administrator Login------------------------- \033[0m\n\n\n";
                    
                    this_thread::sleep_for(chrono::seconds(2));
                    string user, password;
                    
                    cout << "\n\n\033[1;31m\nEnter Admin User Name:\033[0m";
                    getline(cin , user);
                    
                    cout << "\033[1;31m\nEnter Admin Password:\033[0m";
                    getline(cin , password);
                    
                    if(admin(user , password)){
                        system("clear");
                        cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t\t\t----------------------Login Successful----------------------\033[0m\n\n\n\n";
                        this_thread::sleep_for(chrono::seconds(2));
                        start ++;
                    }
                    
                    else{
                        system("clear");
                        cout << "\033[1;35m\n\n\n\t\t\t\t\t\t\t\t\t     ----------------------Invalid User/Password------------------------\033[0m\n\n\n";
                        this_thread::sleep_for(chrono::seconds(2));
                        start = 0;
                    }
                }
                
                else{
                    system("clear");
                    
                    cout << "\033[1;33m\n\n\t\t\t\t\t\t\t\t\t-------------------------MAIN MENU---------------------------\n\n\033[0m";
                    cout << "\n\n\n\033[1;33m1):\033[0mEnter 1 to Add New Student.\n\n\033[1;33m2):\033[0mEnter 2 To Search Student ALL Data by Providing UNIVERSITY ID.\n\n\033[1;33m3):\033[0mEnter 3 To Upload ALL Subjects Attendance\n\n\033[1;33m4):\033[0mEnter 4 To Remove Student All Data By UNIVERSITY ID.\n\n\033[1;33m5):\033[0mEnter 5 To Upload Subject Marks.\n\n"
                    "\033[1;33m6):\033[0mEnter 6 To Remove Transport Service.\n\n\033[1;33m7):\033[0mEnter 7 To Provide Transport.\n\n\033[1;33m8):\033[0mEnter 8 To Check Student Using Transport or Not.\n\n\033[1;33m9):\033[0mEnter 9 to Check Student All Subjects Marks.\n\n\033[1;33m10):\033[0mEnter S to Show All Saved Students Data.\033[1;33m\n\n11):\033[0mEnter X to Close Program"<<endl;
                    cout << "\nTYPE HERE:";
                    cin >> choice;
                    
                    if(choice == "1"){
                        cin.ignore();
                        student_data::add_student(obj);

                    }
                    
                    else if(choice == "2"){
                        student_data::search_student(obj);
                        
                    }
                    
                    else if(choice == "7"){
                        student_data::Provide_transport(obj);
                        
                    }
                    
                    else if(choice == "6"){
                        student_data::Remove_transport(obj);
                    }
                    
                    else if(choice == "5"){
                        string ID;
                        system("clear");
                        
                        cout << "Enter Student University_ID:";
                        cin.ignore();
                        getline(cin , ID);
                        student_data::Number_Creater(obj, ID);
                    }
                    
                    else if(choice == "4"){
                        student_data::Remove_Student(obj);
                    }
                    
                    else if(choice == "3"){
                        student_data::Attendance(obj);
                    }
                    
                    else if(choice == "8"){
                        student_data :: show_transport(obj);
                    }
                    
                    else if(choice == "9"){
                        student_data::show_marks(obj);
                    }
                    
                    else if(choice == "S" || choice == "s"){
                        student_data::show_students(obj);
                    }
                    
                    else if(choice == "X" || choice == "x"){
                        system("clear");
                        
                        cout << "\n\n\nYour Entered Data is Saved in a DATA.txt File.\n\nAll Data Will Be Restored When Program Run Again.";
                        cout << "\n\n\nPress any Key To Exit Program:";
                        
                        string test;
                        cin.ignore();
                        getline(cin , test);
                        
                        ofstream outcounter("counter.DAT", ios::binary);
                        outcounter.write(reinterpret_cast<char*>(&counter), sizeof(counter));
                        
                        cout << "\t\t\t\t\t\t\t\t\t--------------------------PROGRAM CLOSED---------------------------\n\n\n";
                        user = false;
                    }
                    
                    else{
                        system("clear");
                        cout << "\nInvalid Input!!!!!";
                    }
                }
            }
            

        }

};


int main(){
    main_start obj;
    Database *db = new Database();
    db->readFromFile("DATA.txt");
    
    //pass databse as a arg to main_code()
    obj.main_code(db);

    db->writeToFile("DATA.txt");
    
    
    delete(db);
    return 0;
}