#include<iostream>
using namespace std;

class Shape{
    protected:
        int width;
        int height;

    public:
    Shape(){
        cout << "Enter the Width := ";
        cin >> this->width;
        cout << "Enter the Height := ";
        cin >> this->height;
    }

};

class Triangle: public Shape{
    private:
    int triangleArea;

    public:
    Triangle(){
        this->triangleArea = 0.5 * (width * height);
    }

    // getter
    void getTriangleData(){
        cout << endl << "Triangle Area := " << this->triangleArea << endl << endl;
    }
};

class Rectangle: public Shape{
    private:
    int rectangleArea;

    public:
    Rectangle(){
        this->rectangleArea =width * height;
    }
    // getter
    void getRectangleData(){
        cout << endl << "Rectangle Area := " << this->rectangleArea << endl << endl;
    }
};

int main()
{
    Triangle t1;
    Rectangle r1;

    t1.getTriangleData();
    r1.getRectangleData();
    return 0;
}
