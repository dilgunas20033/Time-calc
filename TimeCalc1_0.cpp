//
//  main.cpp
//  TIme Calculator
//
//  Created by Deividas Ilgunas on 8/21/23.
//
#include <algorithm>
#include <string>
#include <iostream>



std::string findCalc(void)
{
    int words=0;
    std::string timeCalc, placeHolder;
    std::string timeLabels[7] = {"SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS"};
    int setAmount = 0;
    int errorTry = 5;
    std::cout << "Are you doing: " << std::endl <<
    "Seconds" << std::endl << "Minutes" << std::endl <<
    "Hours" << std::endl << "Days" << std::endl <<
    "Weeks" << std::endl << "Months" << std::endl <<
    "Years" << std::endl << std::endl;
    std::cin >> placeHolder;
    transform(placeHolder.begin(), placeHolder.end(),  placeHolder.begin(), ::toupper);
    for (setAmount = 0; setAmount < 6; setAmount++)
    {
        if (placeHolder == "SECONDS")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else if (placeHolder == "MINUTES")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else if (placeHolder == "HOURS")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else if (placeHolder == "DAYS")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else if (placeHolder == "WEEKS")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else if (placeHolder == "MONTHS")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else if (placeHolder == "YEARS")
        {
            for (words = 0; words < 7; words++)
            {
                if (placeHolder == timeLabels[words])
                {
                    timeCalc = placeHolder;
                    transform(timeCalc.begin(), timeCalc.end(),  timeCalc.begin(), ::tolower);
                }
            }
        }
        else
        {
            if (errorTry !=0)
            {
                std::cout << std::endl << "Incorrect" << std::endl << "Tries Remaining: " << errorTry << std::endl << std::endl;
                errorTry--;
                std::cout << "Are you doing: " << std::endl <<
                "Seconds" << std::endl << "Minutes" << std::endl <<
                "Hours" << std::endl << "Days" << std::endl <<
                "Weeks" << std::endl << "Months" << std::endl <<
                "Years" << std::endl << std::endl;
                std::cin >> placeHolder;
                transform(placeHolder.begin(), placeHolder.end(),  placeHolder.begin(), ::toupper);
            }
            else if (errorTry == 0)
            {
                std::exit(0);
            }
        }
    }
    return timeCalc;
    
}

std::string calculator(std::string timeCalc)
{
    float seconds, minute, hours, Hours, Days, Weeks, Months, Years;
    float howMany;
    std::cout << std::endl <<  "How many " << timeCalc << "?" << std::endl << std::endl;
    std::cin >> howMany;
    std::cout << howMany;
    return 0;
}


int main()
{
    std::string findCalc();
    std::string calculator(std::string);
    std::cout << "*********************" <<
    std::endl << "   TIME CALCULATOR" << std::endl
    << "*********************" << std::endl << std::endl;
    std::string timeCalc = findCalc();
    std::string transferIt = calculator(timeCalc);
    return 0;
}
