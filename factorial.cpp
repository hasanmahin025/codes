#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define el '\n'
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

// int getDayOfWeek(int day, int month, int year) {
//     if (month < 3) {
//         month += 12;
//         year -= 1;
//     }
//     int h = (day + (int)((month + 1) * 26 / 10) + year + (int)(year / 4) + 6 * (int)(year / 100) + (int)(year / 400)) % 7;
//     return (h + 6) % 7;
// }

void printCalendar(int day, int month, int year, const string& dayName) {
    vector<string> weekDays = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    cout << "|---------------------------|" << el;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << el;
    cout << "|---------------------------|" << el;

    int daysInMonth = getDaysInMonth(month, year);
    int firstDayOfWeek = getDayOfWeek(1, month, year);

    int currentDay = 1;
    bool printedFirstDay = false;

    vector<string> an;


    for (int row = 0; row < 5; ++row) {
        //cout << "|";
        for (int col = 0; col < 7; ++col) {
            if (row == 0 && col < firstDayOfWeek) {
                //cout << setw(3) << "-" << "|";
                an.pb("-");
            } else if (currentDay <= daysInMonth) {
                if (!printedFirstDay) {
                    //cout << setw(3) << currentDay++ << "|";
                    string z= to_string(currentDay);
                    an.pb(z);
                    currentDay++;
                    printedFirstDay = true;
                } else {
                    //cout << setw(3) << currentDay++ << "|";
                    string z= to_string(currentDay);
                    an.pb(z);
                    currentDay++;
                }
            } else {
                //cout << setw(3) << "-" << "|";
                an.pb("-");
            }
        }
        /*cout << el;
        cout << "|---------------------------|" << el;*/

    }
    if(an[an.size()-1]!="-"){
        int ma =stoi(an[an.size()-1]);
        int ha=daysInMonth-ma;
        for(int i=0;i<ha;i++){
            string z= to_string(currentDay);
            an[i]=z;
            currentDay++;
        }
    }
    int l = 0;
    for (int row = 0; row < 5; ++row) {
        cout << "|";
        for (int col = 0; col < 7; ++col) {
            if (row == 0 && col < firstDayOfWeek) {
                if(an[l]!="-")cout << setw(3) << an[l] << "|";
                else cout << setw(2) << an[l] << " |";
            } else if (currentDay <= daysInMonth) {
                if (!printedFirstDay) {
                    cout << setw(3) << an[l] << "|";
                    printedFirstDay = true;
                } else {
                    cout << setw(3) << an[l] << "|";
                }
            } else {
                if(an[l]!="-")cout << setw(3) << an[l] << "|";
                else cout << setw(2) << an[l] << " |";
            }
            l++;
        }
        cout << el;
        cout << "|---------------------------|" << el;
    }
    cout << el;


}

int main() {
    Fast
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; ++t) {
        string date;
        getline(cin, date);
        stringstream ss(date);

        int day, month, year;
        char slash;
        string dayName;

        ss >> day >> slash >> month >> slash >> year >> dayName;

        /*cout << "|---------------------------|" << el;
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << el;
        cout << "|---------------------------|" << el;*/
        printCalendar(day, month, year, dayName);
    }

    return 0;
}