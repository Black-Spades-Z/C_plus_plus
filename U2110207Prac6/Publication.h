#pragma once
#ifndef PUBLICATION.H


#include <iostream>
#include <string>
using namespace std;


class Publication
{
private:
    string title;
    float price;

public:
    Publication()
    {
        price = 0.0;
    };
    void setTitle(string title)
    {
        this->title = title;
    }
    string getTitle()
    {
        cout << "Tite : " << title << endl;
        return title;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
    float getPrice()
    {
        cout << "Price : " << price << endl;
        return price;
    }
};

class Book : public Publication
{
private:
    int pagecount;

public:
    Book()
    {
        pagecount = 0;
    };
    void setPageCount(int pageCount)
    {
        pagecount = pageCount;
    }
    int getPageCount()
    {
        cout << "Pag count : " << pagecount << endl;
        return pagecount;
    }
};
class Tape : public Publication
{
private:
    float playingtime;

public:
    Tape()
    {
        playingtime = 0;
    };
    void setTime(float time)
    {
        playingtime = time;
    }
    float getTime()
    {
        if (playingtime < 60)
        {
            cout << "Playing time is : " << playingtime << " minutes." << endl;
        }
        else if (playingtime >= 60)
        {
            int difference;
            difference = (playingtime / 60);
            cout << "Playing time is : " << difference << " hours and " << (playingtime - (difference * 60)) << " minutes." << endl;

        }
        return playingtime;
    }

};

#endif
