
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
// personal information

class student_personal{
    int choose;
    string name;
    int date;
    string month;
    int year;
    string father_name;
    string mother_name;
    string city;
    string district;
    string state;
    int pincode;
    long long phone;
    string comment;

    public:
    void student_p();
    void faculty_p();

    void student_commit();
    void faculty_commit();
};

void student_personal::student_p(){;
        cout<<"\n\nENTER YOUR PERSONAL DETAILES\n";
            cout<<"NAME:-";
            cin>>name;
            cout<<"ENTER YOUR DATE OF BIRTH\n";
            cout<<"date:-";
            cin>>date;
            cout<<"MONTH:-";
            cin>>month;
            cout<<"YEAR:-";
            cin>>year;
            cout<<"\n\nENTER YOUR PARENTS DETAILES\n";
            cout<<"FATHER NAME:-";
            cin>>father_name;
            cout<<"MOTHER NAME:-";
            cin>>mother_name;
            cout<<"\n\nADDRESS\n";
            cout<<"CITY:-";
            cin>>city;
            cout<<"DISTRICT:-";
            cin>>district;
            cout<<"STATE:-";
            cin>>state;
            cout<<"PINCODE:-";
            cin>>pincode;
            cout<<"ENTER PHONE NUMBER:-";
            cin>>phone;
            ofstream data("data.txt", ios::app);
            data<<name<<"\n"<<date<<"\n"<<month<<"\n"<<year<<"\n"<<father_name<<"\n"<<mother_name<<"\n"<<city<<"\n"<<district<<"\n"<<state<<"\n"<<pincode<<"\n"<<phone;
}

void student_personal::faculty_p(){
        ifstream data("data.txt", ios::app);
        data>>name>>date>>month>>year>>father_name>>mother_name>>city>>district>>state>>pincode>>phone>>comment;     
        cout<<"Name:-"<<name<<"\n";
        cout<<"Date of Birth:- "<<date<<"-"<<month<<"-"<<year<<"\n";
        cout<<"Father name:- "<<father_name<<"\n";
        cout<<"Mother name:- "<<mother_name<<"\n";
        cout<<"Address:\n";
        cout<<"city:-"<<city<<"\n";
        cout<<"District:- "<<district<<"\n";
        cout<<"State:- "<<state<<"\n";
        cout<<"Pincode:- "<<pincode<<"\n";
        cout<<"Phone:- "<<phone<<"\n";
        cout<<"comment:- ";
        
        while(getline(data,comment)){
            cout<<comment;
        }
}

void student_personal::faculty_commit(){
    cout<<"Enter the comment:-";
    // cin.getline(comment,1000);
    cin.ignore();
    getline(cin,comment);

    ofstream data("data.txt", ios::app);
    data<<"\n"<<comment;
}


class acadamics{
    float marks_10th;
    int inter_marks;
    public:
    void student_a();
    void faculty_a();
};

void acadamics::student_a(){
        cout<<"\n\nENTER YOUR ACADAMIC DETAILES\n";
        cout<<"10th marks:-";
        cin>>marks_10th;
        cout<<"INTER MARKS:-";
        cin>>inter_marks;
        ofstream data("acadamics.txt", ios::app);
        data<<"\n"<<marks_10th<<"\n"<<inter_marks<<"\n";
}


void acadamics::faculty_a(){
    ifstream data("acadamics.txt", ios::app);
    data>>marks_10th>>inter_marks;
    cout<<"10th marks:- "<<marks_10th<<"\n";
    cout<<"Inter Marks:- "<<inter_marks<<"\n";
}

class cource{
    char cource_name[100];
    char major_Subject[];
    public:
    void student_c();
    void faculty_c();
};

void cource::student_c(){
    cout<<"CHOOSE YOUR COURCE\n";
    cout<<"1 for UNDER GRADUATION\n";
    cout<<"2 for POST GRADUATION\n";
    int value;
    cin>>value;
    if(value==1){
        strcpy(cource_name,"Under_Graduation(UG)");
        // cource_name="Under Graduation(UG)";
        cout<<"UNDER GRADUATION COURCES\n\n";

        cout<<"1 for computer science and engineering(cse)\n";
        cout<<"2 for Electronics and Communication Engineering(ECE)\n";
        cout<<"3 for Electrical and Electronics Engineering(EEE)\n";
        cout<<"4 for Mechanical Engineering(ME)\n";
        cout<<"5 for Civil Engineering(CE)\n";

        int choosen;
        cin>>choosen;
        if(choosen==1){
            strcpy(major_Subject,"computer_science_and_engineering(cse)");
    
        }
        else if(choosen==2){
            strcpy(major_Subject,"Electronics_and_Communication_Engineering(ECE)");
        }
        else if(choosen==3){
            strcpy(major_Subject,"Electrical_and_Electronics_Engineering(EEE)");
        }
        else if(choosen==4){
            strcpy(major_Subject,"Mechanical_Engineering(ME)");
        }
        else if(choosen==5){
            strcpy(major_Subject,"Civil_Engineering(CE)");
        }
    }

    else if(value==2){
        strcpy(cource_name,"Post_Graduation");
        cout<<"POST GRADUATION COURCES\n";
        cout<<"1)Masters in Business Administration";
        cout<<"2)PGD in Hotel Management.";
        cout<<"3)Certification in Finance and Accounting (CFA)";
        cout<<"4)PG Diploma in Digital Marketing or Business Analytics.";

        int choosen;
        cin>>choosen;
        if(choosen==1){
            strcpy(major_Subject,"Masters_in_Business_Administration");
        }
        else if(choosen==2){
            strcpy(major_Subject,"PGD_in_Hotel_Management");
        }
        else if(choosen==3){
            strcpy(major_Subject,"Certification_in_Finance_and_Accounting(CFA)");
        }
        else if(choosen==4){
            strcpy(major_Subject,"PG_Diploma_in_Digital_Marketing_or_Business_Analytics");
        }
    }

    ofstream data("cource.txt", ios::app);
    data<<cource_name<<"\n"<<major_Subject;
}

void cource::faculty_c(){
    ifstream data("cource.txt", ios::app);
    data>>cource_name>>major_Subject;
    cout<<"Cource choosen:- "<<cource_name<<"\n";
    cout<<"Major In:- "<<major_Subject<<"\n";
}

class fee{
    int fee;
    int hostal_fee; 
    public:
    void student_f();
    void faculty_f();
};

void fee::student_f(){
    cout<<"!------READ CAREFULly-----!"<<"\n";
    cout<<"Registration fee RS:-10,000/-"<<"\n";
    cout<<"COURCE FEE: 3lacks per/Annum"<<"\n";
    cout<<"hostel Fee is 1,50,000 per/Annum"<<"\n";
    cout<< "PRESS 1 To ACCEPT"<<"\n";
    int fee_choise;
    cin>>fee_choise;
    if(fee_choise==1){
        cout<<"Thanks you "<<"\n";
        cout<<"Your registration is finished"<<"\n";
        fee=300000;
        hostal_fee=150000;
    }
        ofstream data("fee.txt", ios::app);
        data<<fee<<"\n"<<hostal_fee<<"\n";
}

void fee::faculty_f(){
    ifstream data("fee.txt", ios::app);
    data>>fee>>hostal_fee;
    cout<<"cource Fee:- "<<fee<<"\n";
    cout<<"Hostel Fee:- "<<hostal_fee<<"\n";
}

class queary{
    string info;
    string respond;
    public:
    void student_info();
    void faculty_info();
};

void queary::faculty_info(){
    cout<<"Information require";
    cin.ignore();
    getline(cin,info);

        ofstream data("info.txt", ios::app);
        data<<info<<"\n";
}

void queary::student_info(){
    ifstream data("info.txt");
    data>>info;

    cout<<"This are the quearys raised by faculty"<<endl;
    while(getline(data,info)){
            cout<<info;
        }
        cout<<endl;
    cin.ignore();
    getline(cin,respond);

    ofstream data_2("info.txt", ios::app);
    data_2<<respond<<"\n";
}


int main(){
    cout<<"\t\t\t\t-------------------------WELCOME-----------------------";
    cout<<"\n\n\n";
    cout<<"select 1 if you are an student\n";
    cout<<"select 2 if you are facultey\n";
    int choose;
    cin>>choose;
    student_personal std1;
    acadamics std1_acadamics;
    cource std1_course;
    fee std1_fee;
    queary std1_queary;
    if(choose==1){
        std1.student_p();
        std1_acadamics.student_a();
        std1_course.student_c();
        std1_fee.student_f();
        std1_queary.student_info();
    }
    else if(choose==2){

        cout<<"1) Verify Student Detailes"<<endl;
        cout<<"2) Putting Comments to the students"<<endl;
        cout<<"3) Verify fee information"<<endl;
        cout<<"4) ask for more information from student"<<endl;

        int f_c;
        cin>>f_c;

        if(f_c==1){
            cout<<endl<<endl;
            std1.faculty_p();
            cout<<endl<<endl;
            std1_acadamics.faculty_a();
            cout<<endl<<endl;
            std1_course.faculty_c();
            cout<<endl<<endl;
        }
        else if(f_c==2){
            std1.faculty_commit();
        }
        else if(f_c==3){
            cout<<endl<<endl;
            std1_fee.faculty_f();
        }
        else if(f_c==4){
            std1_queary.faculty_info();
        }
    }
}
