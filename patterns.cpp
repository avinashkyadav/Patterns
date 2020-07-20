#include <iostream>
using namespace std;


void half_pyramid(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }

}

void half_pyramid_numbers(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
void half_pyramid_alphabets(){
    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << alphabet << " ";
        }
        ++alphabet;

        cout << endl;
    }
}

void inverted_half_pyramid(){

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Inverted_half_pyramid_numbers(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void full_pyramid(){
        
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
   
}


void full_pyramid_numbers(){
       
    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
}

void  Inverted_full_pyramid()
{

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

    
}
void Pascals_triangle()
{
    int rows, coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }
}

void Floyds_Triangle(){

    int rows, number = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }

}


int main()
{


	half_pyramid();
	half_pyramid_numbers();
	half_pyramid_alphabets();
	inverted_half_pyramid();
	Inverted_half_pyramid_numbers();
	full_pyramid();
	
	full_pyramid_numbers();
	
	Inverted_full_pyramid();
	
	Pascals_triangle();
	Floyds_Triangle();
	
	
	
	return 0;

}


