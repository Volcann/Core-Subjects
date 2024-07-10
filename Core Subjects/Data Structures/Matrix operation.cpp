#include<iostream>
#include<iomanip>
using namespace std;

void menu ()
{
    cout<<"What you want perform"<<endl;
    cout<<"Enter 1 to add Matrix"<<endl;
    cout<<"Enter 2 to subtract Matrix"<<endl;
    cout<<"Enter 3 to multipy Matrix"<<endl;
    cout<<"Enter 4 to divide Matrix"<<endl;
}
int main()
{
    int c;
    int a[3][3]= {{1,20,30},{50,60,-70},{80,70,-105}};
    int b[3][3]= {{5,60,30},{58,66,-60},{20,40,-145}};
    cout<<"First matrix"<<endl;
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            cout<<setw(4)<<a[x][y];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Second matrix"<<endl;
    cout<<endl;
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            cout<<setw(4)<<b[x][y];
        }
        cout<<endl;
    }
    menu ();
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"Enter the size to add Matrix"<<endl;
        cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
        cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
        cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
        cout<<"Press 4 for 1 rows 3 coloumn"<<endl;
        cout<<"Press 5 for 2 rows 3 coloumn"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(4)<<a[x][y]+b[x][y];
                }
                cout<<endl;
            }
            break;
        case 2:
            cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<2; y++)
                {
                    cout<<setw(4)<<a[x][y]+b[x][y];
                }
                cout<<endl;
            }
            break;
        case 3:
            cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<1; y++)
                {
                    cout<<setw(4)<<a[x][y]+b[x][y];
                }
                cout<<endl;
            }
            break;
        case 4:
            cout<<"Press 3 for 1 rows 3 coloumn"<<endl;
            for(int x=0; x<1; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(4)<<a[x][y]+b[x][y];
                }
                cout<<endl;
            }
            break;
        case 5:
            cout<<"Press 3 for 2 rows 3 coloumn"<<endl;
            for(int x=0; x<2; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(4)<<a[x][y]+b[x][y];
                }
                cout<<endl;
            }
            break;
        }
        break;
    case 2:
        cout<<"Enter the size to subtract Matrix"<<endl;
        cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
        cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
        cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
        cout<<"Press 4 for 1 rows 3 coloumn"<<endl;
        cout<<"Press 5 for 2 rows 3 coloumn"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(4)<<a[x][y]-b[x][y];
                }
                cout<<endl;
            }
            break;
        case 2:
            cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<2; y++)
                {
                    cout<<setw(4)<<a[x][y]-b[x][y];
                }
                cout<<endl;
            }
            break;
        case 3:
            cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<1; y++)
                {
                    cout<<setw(4)<<a[x][y]-b[x][y];
                }
                cout<<endl;
            }
            break;
        case 4:
            cout<<"Press 3 for 1 rows 3 coloumn"<<endl;
            for(int x=0; x<1; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(4)<<a[x][y]-b[x][y];
                }
                cout<<endl;
            }
            break;
        case 5:
            cout<<"Press 3 for 2 rows 3 coloumn"<<endl;
            for(int x=0; x<2; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(4)<<a[x][y]-b[x][y];
                }
                cout<<endl;
            }
            break;
        }
        break;
    case 3:
        cout<<"Enter the size to multiply Matrix"<<endl;
        cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
        cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
        cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
        cout<<"Press 4 for 1 rows 3 coloumn"<<endl;
        cout<<"Press 5 for 2 rows 3 coloumn"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(16)<<a[x][y]*b[x][y];
                }
                cout<<endl;
            }
            break;
        case 2:
            cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<2; y++)
                {
                    cout<<setw(16)<<a[x][y]*b[x][y];
                }
                cout<<endl;
            }
            break;
        case 3:
            cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<1; y++)
                {
                    cout<<setw(16)<<a[x][y]*b[x][y];
                }
                cout<<endl;
            }
            break;
        case 4:
            cout<<"Press 3 for 1 rows 3 coloumn"<<endl;
            for(int x=0; x<1; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(16)<<a[x][y]*b[x][y];
                }
                cout<<endl;
            }
            break;
        case 5:
            cout<<"Press 3 for 2 rows 3 coloumn"<<endl;
            for(int x=0; x<2; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(16)<<a[x][y]*b[x][y];
                }
                cout<<endl;
            }
            break;
        }
        break;
    case 4:
        cout<<"Enter the size to divide Matrix"<<endl;
        cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
        cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
        cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
        cout<<"Press 4 for 1 rows 3 coloumn"<<endl;
        cout<<"Press 5 for 2 rows 3 coloumn"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Press 1 for 3 rows 3 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(16)<<(float)a[x][y]/b[x][y];
                }
                cout<<endl;
            }
            break;
        case 2:
            cout<<"Press 1 for 3 rows 2 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<2; y++)
                {
                    cout<<setw(16)<<(float)a[x][y]/b[x][y];
                }
                cout<<endl;
            }
            break;
        case 3:
            cout<<"Press 3 for 3 rows 1 coloumn"<<endl;
            for(int x=0; x<3; x++)
            {
                for(int y=0; y<1; y++)
                {
                    cout<<setw(16)<<(float)a[x][y]/b[x][y];
                }
                cout<<endl;
            }
            break;
        case 4:
            cout<<"Press 3 for 1 rows 3 coloumn"<<endl;
            for(int x=0; x<1; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(16)<<(float)a[x][y]/b[x][y];
                }
                cout<<endl;
            }
            break;
        case 5:
            cout<<"Press 3 for 2 rows 3 coloumn"<<endl;
            for(int x=0; x<2; x++)
            {
                for(int y=0; y<3; y++)
                {
                    cout<<setw(16)<<(float)a[x][y]/b[x][y];
                }
                cout<<endl;
            }
            break;
        }
        break;
    default:
        cout<<"Enter the right command"<<endl;
        break;
    }
    return 0;
}
