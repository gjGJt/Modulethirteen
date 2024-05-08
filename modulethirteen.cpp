#include <iostream>


using namespace std;




//class #1
class Shoes
{
    //attributes
    private:
        string color;
        int size;
       


    public:


    //Shoe Constructor
    Shoes(string c, int s)
    {
        color = c;
        size = s;
    }


    //accessor and mutator Methods for Color
    string getColor()
    {
        return color;
    }


    void setColor(string col)
    {
        color = col;
    }


    //accessor and mutator Methods for Size
    bool getSize()
    {
        return size;
    }


    void setSize(int si)
    {
        size = si;
    }


    //Is it bigfoot's shoe? function
    bool BigFoot()
    {
        if (size >= 24)
        {
            return true;
        }
        return false;
    }
};


//class #2
class Caffeine
{
    //attributes
    private:
        int grams;
   
    public:


        //Caffeine Constructor
        Caffeine(int g)
        {
            grams = g;
        }


    //accessor and mutator Methods for Grams
    int getGrams()
    {
        return grams;
    }


    void setGrams(int gr)
    {
        grams = gr;
    }


    //Are you a caffeine addict? function
    bool Addict()
    {
        if (grams >= 1000)
        {
            return true;
        }
        return false;
       
    }
   
};


//class #3
class Pet
{
    //attributes
    private:
        int legs;
        bool isCute;
       
    public:


    //Pet Constructor
    Pet(int l, bool c)
    {
        legs = l;
        isCute = c;
    }


    //accessor and mutator Methods for Legs
    int getLegs()
    {
        return legs;
    }


    void setLegs(int le)
    {
        legs = le;
    }


    //accessor and mutator Methods for isCute
    bool getIsCute()
    {
        return isCute;
    }


    void setIsCute(bool cute)
    {
        isCute = cute;
    }


    //Scale of 0-10, how cute is the pet? function
    string cuteLevel()
    {
        string level;


        if (isCute==true)
        {
            if (legs<4)
            {
                level =  "5-10";
            }
        }
        else
        {
            level = "0-4";
        }
        return level;
    }
};






int main()
{
    //constructing Shoe Object
    Shoes one("Black",9);


    //contructing Caffeine Object
    Caffeine uno(500);


    //constructing Pet Object
    Pet ichi(4, true);
   
   
   
    return 0;
}

