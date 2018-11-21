#ifndef DEF_DATE
#define DEF_DATE

#include "global.hpp"


class date
{
public:
//Variable
    unsigned _year;
    unsigned _month;
    unsigned _day;
    unsigned _hour;
    unsigned _minute;
//class methods
    //setters
    void set_year(unsigned year);
    void set_month(unsigned month);
    void set_day(unsigned day);
    void set_hour(unsigned hour);
    void set_minute(unsigned minute);
    //getters
    unsigned get_year();
    unsigned get_month();
    unsigned get_day();
    unsigned get_hour();
    unsigned get_day();
    //displayers
    void display_date();

//Methods
    //contructors
    date();
    date(unsigned year, unsigned month, unsigned day, unsigned hour, unsigned minute);
};


#endif
