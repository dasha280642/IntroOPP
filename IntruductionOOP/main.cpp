#include <iostream>
#include <math.h>
using namespace std;

class Point
{
public:

    float x;
    float x1;//���� ������
    float y;
    float y1;//���� ������
     

    double get_x()const
    {
        return x;
    }

    double get_x1()const
    {
        return x1;
    }

    double get_y()const
    {
        return y;
    }

    double get_y1()const
    {
        return y1;
    }


    void set_x(double x)
    {
        this->x = x;
    }

    void set_x1(double x1)
    {
        this->x1 = x1;
    }

    void set_y(double y)
    {
        this->y = y; 
    } 
    void set_y1(double y1)
    {
        this->y1 = y1;
    }

    void distance()
    {
        cout << "���������� ����� X = " << x << "\t" << x1 << endl;
        cout << "���������� ����� Y = " << y << "\t" << y1 << endl;
        float S = sqrt(pow(x - x1, 2) + pow(y - y1, 2)); // �-� ��� ���������� ���������� ����� �������. sqrt ��������� ������
        //�-� pow �������� � �������
        cout << "���������� ����� ������ = " << S << endl;
      
       
    }
};


      int main()
      {
          setlocale(LC_ALL, "");
          Point xy; //������� ������ ������ Point  - xy
          xy.set_x(3);
          xy.set_x1(0);
          xy.set_y(4);
          xy.set_y1(0);
          cout << xy.get_x();
          cout << "\t";
          cout << xy.get_y() << endl;
         
          
          xy.distance();

          system("pause");

          return 0;

      }
