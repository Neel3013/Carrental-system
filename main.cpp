#include <bits/stdc++.h>
#include <conio.h>
#include <unistd.h>
#include <iomanip>
using namespace std;
class car{
    string car_mark [10] = {"Hyundai", "BMW", "Mercedes", "Audi", "Tesla", "Skoda", "Kia", "Toyota", "Ford"};
    string model [10]  = {"2019MD","22AS","2021DS","2018LA","209MW","2015Ps","2018PW","2017QW","2022SA"};
    string color [10]  ={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};
    string maxs_peed [10] ={"190 Km/h ","180 Km/h","220 Km/h","200 Km/h","230 Km/h","160 Km/h","180 Km/h","140 Km/h","200 Km/h"};
    int price [ 10 ] ={100,200,300,500,200,250,400,600,900} ;
    int date [10]={2019,2022,2021,2017,2018,2021,2020,2015,2022};
public:
    void car_data() {
        fstream h[10];
        for (int i = 0; i < 10; i++) {
            h[i].open("Hyundai.txt", ios::out);
            if (!h[i].is_open()) {
                cout << "File not created!";
            } else {
                h[i] << "\t\t\tName : " << car_mark[i] << endl;
                h[i] << "\t\t\tColor : " << color[i] << endl;
                h[i] << "\t\t\tModel : " << model[i] << endl;
                h[i] << "\t\t\tDate : " << date[i] << endl;
                h[i] << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
                h[i] << "\t\t\tPrice : " << price[i] << "k" << endl;

                h[i].close();
            }
        }


    }
        string get_name(int n) {
            return car_mark[n - 1];
        }
        string get_color(int n) {
            return color[n - 1];
        }
        string get_model(int n) {
            return model[n - 1];
        }
        string get_max_speed(int n) {
            return maxs_peed[n - 1];
        }
        int get_price(int n) {
            return price[n - 1];
        }
        int get_date(int n) {
            return date[n - 1];
        }
 void show_data_car(car);
};

void car::show_data_car(car data){
    cout<<"-------------------------------------------------------------------------\n";
    cout<<"    Car name  " <<" "<<"Car model   "<<" "<<" Car color  "<<" "<<"       car speed "<<" "<<"    jprice "<<endl;
    for(int i=0;i<9;i++){

        cout<<"  "<<(i+1)<<" - "<<data.get_name(i+1);
        cout<<"\t"<<data.get_model(i+1);
        cout<<"\t\t"<<data.get_color(i+1);
        cout<<"\t\t"<<data.get_max_speed(i+1);
        //cout<<"\t"<<data.get_date(i+1);
        cout<<"\t"<<data.get_price(i+1)<<"k"<<endl;
    }
}
class information {
    string name;
    string address;
    string phone;
    string id;
    string license;

public:

    void set_name() {
        cout<<"Enter name "<<"\n";
        cin>>name;
    }

    void set_address() {
       cout<<"Enter address "<<"\n";
        cin>>address;
    }

    void set_phone() {
       cout<<"Enter phone number "<<"\n";
        cin>>phone;
    }

    void set_id() {
       cout<<"Enter id "<<"\n";
        cin>>id;
    }

    void set_license() {
        cout<<"Enter name "<<"\n";
        cin>>license;
    }
    string get_Cname(){
        return name;
    }
    string get_Caddress(){
        return address;
    }
    string get_Cphone(){
        return phone;
    }
    string get_Cid(){
        return id;
    }
    string get_Clicense(){
        return license;
    }
    friend void show_license_data(information);
    //friend void info();
};
void show_license_data(information l){
    l.set_name();
    l.set_address();
    l.set_phone();
    l.set_id();
    l.set_license();
    cout<<"--------"<<endl;
    cout<<"THE CUSTOMER INFORMATION"<<endl;
    cout<<l.get_Cname()<<endl;
    cout<<l.get_Caddress()<<endl;
    cout<<l.get_Cphone()<<endl;
    cout<<l.get_Cid()<<endl;
    cout<<l.get_Clicense()<<endl;
}
class rent:public car,public information{
private:
    int days{};
    double price2=0;
    double rent_fee=0;
    string name,address,phone,id,license;

    string m;
public:
    void data(){
        do {
            cout << "\t\t\t\tPlease Select a Car" << endl;
            cout << "\t\t\t\tEnter '1' for Tesla 2011." << endl;
            cout << "\t\t\t\tEnter '2' for Hyundai 2015." << endl;
            cout << "\t\t\t\tEnter '3' for Ford 2017." << endl;
            cout << "\t\t\t\tEnter '4' for Kia 2018." << endl;
            cout << "\t\t\t\tEnter '5' for BMW 2019." << endl;
            cout << "\t\t\t\tEnter '6' for Mercedes 2012." << endl;
            cout << "\t\t\t\tEnter '7' for TOYOTA 2013." << endl;
            cout << "\t\t\t\tEnter '8' for FIAT 2016." << endl;
            cout << "\t\t\t\tEnter '9' for SUZUKI 2020." << endl;
            cout << "\t\t\t\tEnter '10' for SKODA 2014." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose one of the Cars from these above options: ";
            cin >> m;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            if (m == "1") {
                cout << "You have  chose Tesla model 2011" << endl;
                ifstream inA("A.txt");
                char line[100];
                while (inA) {
                    inA.getline(line, 100);
                    if (inA) cout << line << endl;
                }

            }
            if (m == "2") {
                cout << "You have chose Hyundai model 2015" << endl;
                ifstream inB("B.txt");
                char line[100];
                while (inB) {
                    inB.getline(line, 100);
                    if (inB) cout << line << endl;
                }
            }
            if (m == "3") {
                cout << "You have chose Ford model 2017" << endl;
                ifstream inC("C.txt");
                char line[100];
                while (inC) {
                    inC.getline(line, 100);
                    if (inC) cout << line << endl;
                }
            }
            if (m == "4") {

                cout << "You have chose kia model 2018" << endl;
                ifstream inD("D.txt");
                char line[100];
                while (inD) {
                    inD.getline(line, 100);
                    if (inD) cout << line << endl;
                }
            }
            if (m== "5") {
                cout << "You have chose BMW model 2019" << endl;
                ifstream inE("E.txt");
                char line[100];
            }
            if (m == "6") {

                cout << "You have chose Mercedes model 2012" << endl;
                ifstream inF("F.txt");
                char line[100];
                while (inF) {
                    inF.getline(line, 100);
                    if (inF) cout << line << endl;
                }

            }
            if (m == "7") {
                cout << "You have chose TOYOTA model 2013" << endl;
                ifstream inG("G.txt");
                char line[100];
                while (inG) {
                    inG.getline(line, 100);
                    if (inG) cout << line << endl;
                }
            }
            if (m == "8") {

                cout << "You have chose FIAT model 2016" << endl;
                ifstream inH("H.txt");
                char line[100];
                while (inH) {
                    inH.getline(line, 100);
                    if (inH) cout << line << endl;
                }

            }
            if (m == "9") {
                cout << "You have chose  SUZUKI model 2020" << endl;
                ifstream inI("I.txt");
                char line[100];
                while (inI) {
                    inI.getline(line, 100);
                    if (inI) cout << line << endl;
                }

            }
            if (m == "10") {

                cout << "You have chose SKODA model 2014" << endl;
                ifstream inJ("J.txt");
                char line[100];
                while (inJ) {
                    inJ.getline(line, 100);
                    if (inJ) cout << line << endl;
                }

            }
            if (m != "1"&& m != "2" && m != "3" && m != "4"&& m != "5" && m != "6" &&
                m != "7"&& m != "8" && m != "9" && m!= "10") {
                cout << "In valid Car Model and Please try again!" << endl;
            }
        } while (m != "1"&& m != "2" && m != "3" && m != "4"&& m != "5" && m != "6" &&
                 m != "7"&& m != "8" && m != "9" && m!= "10");
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please see following information: " << endl;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }
       void calc(){
        cout << "Calculating rent. Please wait......" << endl;
        if (m == "1")
            price2 = days * get_price(1);
        if (m == "2")
            price2 = days *get_price(2);
        if (m == "3")
            price2 = days * get_price(3);
        if (m == "4")
            price2 = days * get_price(4);
        if (m == "5")
            price2 = days * get_price(5);
        if (m == "6")
            price2 = days * get_price(6);
        if (m == "7")
            price2 = days * get_price(7);
        if (m == "8")
            price2 = days * get_price(8);
        if (m == "9")
            price2 = days * get_price(9);
        if (m == "10")
            price2 = days * get_price(10);
        if (rent_fee != 0) {
            price2 += rent_fee;
        }
    }
    void cusrt_info(){
        cout << "\t\t\t\tPlease enter your name"<<endl;
        cin>>name;
        set_name(name);
        cout << "\t\t\t\tPlease enter your address"<<endl;
        cin>>address;
        set_address(address);
        cout << "\t\t\t\tPlease enter your phone"<<endl;
        cin>>phone;
        set_phone(phone);
        cout << "\t\t\t\tPlease enter your id"<<endl;
        cin>>id;
        set_id(id);
        cout << "\t\t\t\tPlease enter your license"<<endl;
        cin>>license;
        set_license(license);
        cout << endl;
    }

    void rent_info(){
        int x= stoi(m);
            cout << "\n\t\t                     your information                 "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<name<<" |"<<endl;
        cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<get_model(x)<<" |"<<endl;
        cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<get_date(x)<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
        cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<price2<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
    }
    void all(){
        cusrt_info();
        data();
        calc();
        rent_info();
    }
double operator+(rent r){
        int p=price2+r.price2;
        cout<<"the totel of the two customer spend: "<<p<<endl;
    }
};
int main()
{
     car c1;
     c1.car_data();
     c1.show_data_car(c1);
     information i1;
     show_license_data(i1);
     return 0;
}
