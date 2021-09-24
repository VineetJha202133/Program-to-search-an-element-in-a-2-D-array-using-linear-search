//Program to search an element in a 2-D array using linear search
#include <iostream>
using namespace std;

int main(){
    int i,j,value,rows,columns,check=0;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"Enter the elements of array"<<endl;
    for (i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<"element "<<"("<<i<<','<<j<<"): ";
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element of which you need to find position: ";
    cin>>value;

    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            if (value == arr[i][j]){
                cout<<value<<" found at position " << " ("<<i<<','<<j<<")"<<endl;
                check = 1;
            }
        }
    }
    if (check == 0){
        cout<<value<<" Error (Element not found) "<<endl;
    }

    return 0;
}
