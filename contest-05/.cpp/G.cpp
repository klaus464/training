#include <bits/stdc++.h>
using namespace std;

#define SecondsInADay 86400

typedef struct
{
    string name;
    int limit;
} Month;

int main()
{
    int n, i;
    cin >> n;
    int input, elapsed_days[n];

    for (i = 0; i < n; i++)
    {
        cin >> input;
        elapsed_days[i] = input / 86400;
    }

    Month months[] = {{"JAN", 31}, {"FEB", 28}, {"MAR", 31}, {"APR", 30}, {"MAY", 31}, {"JUN", 30}, {"JUL", 31}, {"AUG", 31}, {"SEP", 30}, {"OCT", 31}, {"NOV", 30}, {"DEC", 31}};

    string week_days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int
        date,
        year,
        month_count,
        week_day_count;
    bool is_leap_year;
    string week_day;
    Month month;

    for (int days : elapsed_days)
    {
        date = 1;
        year = 1970;
        month_count = 1;
        week_day_count = 4;
        is_leap_year = (1970 % 4 == 0);
        week_day = week_days[week_day_count - 1];
        month = months[month_count - 1];

        for (i = 1; days > 0; i++)
        {
            if (month.name == "DEC" && date == month.limit)
            {
                year++;
                month_count = 1;
                month = months[month_count - 1];
                date = 1;
                is_leap_year = (year % 4 == 0);
            }
            else if (date + 1 > month.limit)
            {
                if (is_leap_year && date == 28)
                    date++;
                else
                {
                    month = months[++month_count - 1];
                    date = 1;
                }
            }
            else
                date++;

            (week_day_count == 7) ? week_day_count = 1 : week_day_count++;
            week_day = week_days[week_day_count - 1];

            days--;
        }

        if (date < 10)
            cout << 0;

        cout << date << "-" << month.name << "-" << year << " " << week_day << endl;
    }
    return 0;
}