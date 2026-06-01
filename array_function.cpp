#include <iostream>

void displayItem(int gear[], int inventory[]);
void swapItem(int gear[], int inventory[]);

using namespace std;

int main()
{
    
    string name = "Sora";
    int gear[4] = {1,2,3,4};
    int inventory[4] = {5,6,7,8};
    
    //int* itemTag = gear;
    
    
    
    cout << "Character name : " << name << endl;
  
    
    
    displayItem(gear,inventory);
    
    swapItem(gear,inventory);
   
    
    displayItem(gear,inventory);
    
    
    
    
    cout << "\n\n\n\n";
    for (int row = 8; row >= 1; row--)
        {
        for(int column = 1; column < row; column++)
            cout << column << " ";
            
        cout<< row << endl;    
        }
    return 0;
}



void displayItem(int gear[], int inventory[])
{   
    cout << "List gear : " << endl;
     for (int count = 0; count < 4; count++)
    {
        cout << "[" << count+1 << "]" <<  gear[count] << endl;
    }
    
    
     cout << "Inventory : " << endl;
     for (int count = 0; count < 4; count++)
    {
        cout << "[" << count+1 << "]" <<  inventory[count] << endl;
    }
    
    cout << "\n\n";
}


void swapItem(int gear[], int inventory[])
{   
     cout << "Which gear do you want to swap out ?" << endl;
     for (int count = 0; count < 4; count++)
    {
        cout << "[" << count+1 << "]" <<  gear[count] << endl;
    }
    
    int select_gear = 0;
    cin >> select_gear;
    
    
    cout << "To which item you want to swap ?" << endl;
     for (int count = 0; count < 4; count++)
    {
        cout << "[" << count+1 << "]" <<  inventory[count] << endl;
    }
    
    int select_inventory = 0;
    cin >> select_inventory;
    
    
    int temp = gear[select_gear-1];
    gear[select_gear-1] = inventory[select_inventory-1];
    inventory[select_inventory-1] = temp;
    
    cout << "\n\n";
}

