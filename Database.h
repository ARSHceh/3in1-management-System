#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Database {
public:
    string students_names[500];
    string semester[500];
    int roll_number[500];
    string department[500];
    string class_name[500];
    string uni_ID[500];
    string bus_route[500];
    char transport_avl[500];
    float credit[500];
    float gpa[500];

    long subject_1_marks[500];
    char subject_1_grade[500];
    float subject_1_points[500];
    int sub1_attendance[500];
    string attendance_warn_1[500];

    string attendance_warn_2[500];
    long subject_2_marks[500];
    char subject_2_grade[500];
    float subject_2_points[500];
    int sub2_attendance[500];

    string attendance_warn_3[500];
    long subject_3_marks[500];
    char subject_3_grade[500];
    float subject_3_points[500];
    int sub3_attendance[500];

    string attendance_warn_4[500];
    long subject_4_marks[500];
    char subject_4_grade[500];
    float subject_4_points[500];
    int sub4_attendance[500];

    string attendance_warn_5[500];
    long subject_5_marks[500];
    char subject_5_grade[500];
    float subject_5_points[500];
    int sub5_attendance[500];

    // Default constructor for resetting values
    Database() {
        for (int x = 0; x < 500; x++) {
            students_names[x] = " ";
            semester[x] = "0";
            roll_number[x] = 0;
            department[x] = " ";
            class_name[x] = " ";
            uni_ID[x] = " ";
            bus_route[x] = "";
            gpa[x] = 0;
            transport_avl[x] = 'n';
            subject_1_marks[x] = 0;
            subject_1_grade[x] = ' ';
            subject_1_points[x] = 0;
            subject_2_marks[x] = 0;
            subject_2_grade[x] = ' ';
            subject_2_points[x] = 0;
            subject_3_marks[x] = 0;
            subject_3_grade[x] = ' ';
            subject_3_points[x] = 0;
            subject_4_marks[x] = 0;
            subject_4_grade[x] = ' ';
            subject_4_points[x] = 0;
            subject_5_marks[x] = 0;
            subject_5_grade[x] = ' ';
            subject_5_points[x] = 0;
            credit[x] = 0.0;
            gpa[x] = 0.0;
        }
    }

    void writeToFile(const std::string& filename) {
        ofstream file(filename);
        if (!file) {
            cerr << "" << endl;
            return;
        }

        for (int i = 0; i < 500; i++) {
            file << students_names[i] << ","
                 << semester[i] << ","
                 << roll_number[i] << ","
                 << department[i] << ","
                 << class_name[i] << ","
                 << uni_ID[i] << ","
                 << bus_route[i] << ","
                 << transport_avl[i] << ","
                 << credit[i] << ","
                 << gpa[i] << ","
                 << subject_1_marks[i] << ","
                 << subject_1_grade[i] << ","
                 << subject_1_points[i] << ","
                 << sub1_attendance[i] << ","
                 << attendance_warn_1[i] << ","
                 << attendance_warn_2[i] << ","
                 << subject_2_marks[i] << ","
                 << subject_2_grade[i] << ","
                 << subject_2_points[i] << ","
                 << sub2_attendance[i] << ","
                 << attendance_warn_3[i] << ","
                 << subject_3_marks[i] << ","
                 << subject_3_grade[i] << ","
                 << subject_3_points[i] << ","
                 << sub3_attendance[i] << ","
                 << attendance_warn_4[i] << ","
                 << subject_4_marks[i] << ","
                 << subject_4_grade[i] << ","
                 << subject_4_points[i] << ","
                 << sub4_attendance[i] << ","
                 << attendance_warn_5[i] << ","
                 << subject_5_marks[i] << ","
                 << subject_5_grade[i] << ","
                 << subject_5_points[i] << ","
                 << sub5_attendance[i] << endl;
        }

        file.close();
    }

    void readFromFile(const std::string& filename) {
        ifstream file(filename);
        if (!file) {
            cerr << "" << endl;
            return;
        }

        string line;
        for (int i = 0; i < 500; i++) {
            if (!getline(file, line)) break;

            stringstream ss(line);
            string temp;

            getline(ss, students_names[i], ',');
            getline(ss, semester[i], ',');
            getline(ss, temp, ','); roll_number[i] = stoi(temp);
            getline(ss, department[i], ',');
            getline(ss, class_name[i], ',');
            getline(ss, uni_ID[i], ',');
            getline(ss, bus_route[i], ',');
            getline(ss, temp, ','); transport_avl[i] = temp[0];
            getline(ss, temp, ','); credit[i] = stof(temp);
            getline(ss, temp, ','); gpa[i] = stof(temp);
            getline(ss, temp, ','); subject_1_marks[i] = stol(temp);
            getline(ss, temp, ','); subject_1_grade[i] = temp[0];
            getline(ss, temp, ','); subject_1_points[i] = stof(temp);
            getline(ss, temp, ','); sub1_attendance[i] = stoi(temp);
            getline(ss, attendance_warn_1[i], ',');
            getline(ss, attendance_warn_2[i], ',');
            getline(ss, temp, ','); subject_2_marks[i] = stol(temp);
            getline(ss, temp, ','); subject_2_grade[i] = temp[0];
            getline(ss, temp, ','); subject_2_points[i] = stof(temp);
            getline(ss, temp, ','); sub2_attendance[i] = stoi(temp);
            getline(ss, attendance_warn_3[i], ',');
            getline(ss, temp, ','); subject_3_marks[i] = stol(temp);
            getline(ss, temp, ','); subject_3_grade[i] = temp[0];
            getline(ss, temp, ','); subject_3_points[i] = stof(temp);
            getline(ss, temp, ','); sub3_attendance[i] = stoi(temp);
            getline(ss, attendance_warn_4[i], ',');
            getline(ss, temp, ','); subject_4_marks[i] = stol(temp);
            getline(ss, temp, ','); subject_4_grade[i] = temp[0];
            getline(ss, temp, ','); subject_4_points[i] = stof(temp);
            getline(ss, temp, ','); sub4_attendance[i] = stoi(temp);
            getline(ss, attendance_warn_5[i], ',');
            getline(ss, temp, ','); subject_5_marks[i] = stol(temp);
            getline(ss, temp, ','); subject_5_grade[i] = temp[0];
            getline(ss, temp, ','); subject_5_points[i] = stof(temp);
            getline(ss, temp, ','); sub5_attendance[i] = stoi(temp);
        }

        file.close();
    }
};


