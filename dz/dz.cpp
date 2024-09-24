#include <iostream> 
#include <string> 

using namespace std;

class Student {
private:
    string fullName;
    string birthDate;
    string phoneNumber;
    string city;
    string country;
    string universityName;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    Student() {}

    void inputStudentData() {
        cout << "Print fullName) ";
        getline(cin, fullName);

        cout << "Print  birthDate (DD.MM.RRRR): ";
        getline(cin, birthDate);

        cout << "Print phoneNumber ";
        getline(cin, phoneNumber);

        cout << "Print city";
        getline(cin, city);

        cout << " Print country";
        getline(cin, country);

        cout << "Print universityName ";
        getline(cin, universityName);

        cout << "Print universityCity ";
        getline(cin, universityCity);

        cout << "Print universityCountry ";
        getline(cin, universityCountry);

        cout << "Print groupNumber ";
        getline(cin, groupNumber);
    }

    void printStudentData()  {
        cout << "\nInformation oS Student \n";
        cout << "FullName: " << fullName << endl;
        cout << " birthDate" << birthDate << endl;
        cout << "phoneNumber;: " << phoneNumber << endl;
        cout << "city " << city << endl;
        cout << "country  " << country << endl;
        cout << "universityName " << universityName << endl;
        cout << "universityCity " << universityCity << endl;
        cout << " universityCountry " << universityCountry << endl;
        cout << "groupNumber  " << groupNumber << endl;
    }

    string getFullName()  {
        return fullName;
    }

    string getBirthDate() {
        return birthDate;
    }

    string getPhoneNumber()  {
        return phoneNumber;
    }

    string getCity() {
        return city;
    }

    string getCountry()  {
        return country;
    }

    string getUniversityName()  {
        return universityName;
    }

    string getUniversityCity()  {
        return universityCity;
    }

    string getUniversityCountry()  {
        return universityCountry;
    }

    string getGroupNumber()  {
        return groupNumber;
    }
    void setFullName(string& name) {
        fullName = name;
    }

    void setBirthDate(string& date) {
        birthDate = date;
    }

    void setPhoneNumber(string& phone) {
        phoneNumber = phone;
    }

    void setCity(string& cityName) {
        city = cityName;
    }

    void setCountry(string& countryName) {
        country = countryName;
    }

    void setUniversityName(string& uniName) {
        universityName = uniName;
    }

    void setUniversityCity(string& uniCity) {
        universityCity = uniCity;
    }

    void setUniversityCountry(string& uniCountry) {
        universityCountry = uniCountry;
    }
};

int main() {
    Student student;
    student.inputStudentData();
    student.printStudentData();
    cout << "\nGroup of Student: " << student.getGroupNumber() << endl;

    cout << "New number of Group  " << student.getGroupNumber() << endl;

    return 0;
}

//2ex 

#include <iostream> 
#include <fstream>    
using namespace std;

class Point {
private:
    double x, y, z;

public:
    Point() : x(0), y(0), z(0) {}


    void inputPoint() {
        cout << "¬вед≥ть x, y, z: ";
        cin >> x >> y >> z;
    }

    void printPoint() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }


    void saveToFile(const string& filename) {
        ofstream file(filename);
        file << x << " " << y << " " << z << endl;
        file.close();
    }


    void loadFromFile(const string& filename) {
        ifstream file(filename);
        file >> x >> y >> z;
        file.close();
    }
};

int main() {
    Point point;


    point.inputPoint();
    point.printPoint();
    point.saveToFile("point.txt");
    Point newPoint;
    newPoint.loadFromFile("point.txt");
    newPoint.printPoint();

    return 0;
}