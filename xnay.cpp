#include <iostream>
#include <cmath>

using namespace std;

class XnaY{

    private:
        int x;
        int y;

    public:
        XnaY(){
            x=1;
            y=1;
        }

        XnaY(int a, int b){
            x=a;
            y=b;
        }

        XnaY(const XnaY &pp){
            x = pp.x;
            y = pp.y;
        }

        void setX(int a){
            x=a;
        }

        void setY(int b){
            y=b;
        }

        void setX_Y(int a, int b){
            x=a;
            y=b;
        }

        int getX() const{
            return x;
        }

        int getY() const{
            return y;
        }

        int getXnaY() const{
            return pow(x,y);
        }

};

int main()
{
    XnaY test;
    cout << test.getXnaY() << endl;
    test.setX(2);
    XnaY cpy=test;
    cout << cpy.getXnaY() << endl;

    test.setX(2);
    test.setY(5);
    cout << test.getX() << endl;
    cout << test.getY() << endl;
    cout << test.getXnaY() << endl;
    test.setX_Y(3,3);
    cout << test.getXnaY() << endl;
    return 0;
}
