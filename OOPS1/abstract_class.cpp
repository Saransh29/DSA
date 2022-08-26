#include <bits/stdc++.h>
using namespace std;

/*
    Abstract base class-
        aise class jise hum aage object bnane m use nhi krte 
        iska purpose hi inherit hone ka h

    Pure virtual function -
        aisa virtual function jiska new version
        Derived class m bnana hi pade

*/

class youtube
{
protected:
    string title;
    float rating;

public:
    youtube(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0 // do nothing function
                            // --> pure virtual function
                        
};
class ytvideo : public youtube
{
    int videolen;

public:
    ytvideo(string t, float r, int vl) : youtube(t, r)
    { // youtube constructor is called
        videolen = vl;
    }
    void display()
    {
        cout << "this is a video with title: " << title << endl;
        cout << "Ratings: " << rating << endl;
        cout << "length of this video is: " << videolen << " minutes" << endl;
        cout << endl;
    }
};
class yttext : public youtube
{
    int words;

public:
    yttext(string t, float r, int wc) : youtube(t, r)
    { // youtube constructor is called
        words = wc;
    }
    // void display()
    // {
    //     cout << "this is a text tutorial with title: " << title << endl;
    //     cout << "Ratings: " << rating << endl;
    //     cout << "No. of werds in this tutorial: " << words << endl;
    //     cout << endl;
    // }
};
int main()
{
    string title;
    float rating;
    int words, videolen;

    // for video
    title = "c++ tutorial";
    rating = 4.6;
    videolen = 9;

    ytvideo cpp_video(title, rating, videolen);
    cpp_video.display();

    cout << endl;

    // for text
    title = "c++ tutorial text";
    rating = 4.6;
    words = 299;

    yttext cpp_text(title, rating, words);
    cpp_text.display();

    youtube *tuts[2];
    tuts[0] = &cpp_video; // as virtual function is used in base class
    tuts[1] = &cpp_text;  // the derived class diplay function is called

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}