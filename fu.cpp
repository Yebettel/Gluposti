#include <iostream>
using namespace std;

class Osoba{

    private:

    int danRodjenja;
    int mesecRodjenja;
    int godinaRodjenja;

    public:

    Osoba(){
        danRodjenja=1;
        mesecRodjenja=1;
        godinaRodjenja=0;

        Osoba(int d, int m, int g){
            danRodjenja=d;
            mesecRodjenja=m;
            godinaRodjenja=g;
        }

    bool isvalid(){
        if(!(x<=31 && x>=1))
        return 0;
        if(!(x<=12 && x>=1))
        return 0;
        if(!(x<=130 && x>=0))
        return 0;
        return 1;
    }

    void setdan(int x){
        danRodjenja=x;
    }

    void setmesec(int x){
        mesecRodjenja=x;
    }

    void setgodina(int x){
        godinaRodjenja=x;
    }

    int getdan(){
        return danRodjenja;
    }
    int getmesec(){
        return mesecRodjenja;
    }
    int getgodina(){
        return godinaRodjenja;
    }
};

int main()
{
    Osoba crnac;
    crnac.getdan();
    crnac.getmesec();
    crnac.getgodina();
    crnac.setdan(2);
    crnac.setmesec(2);
    crnac.setgodina(15);
    return 0;
}
