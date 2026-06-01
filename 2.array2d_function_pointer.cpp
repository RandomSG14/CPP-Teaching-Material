#include <iostream>

void displayItem(int* gear, int (*inventory)[3]);
void swapItem(int gear[], int inventory[]);


int col_array = 3; 

using namespace std;

int main()
{
    
    string name = "Sora";
    int gear[4] = {1,2,3,4};
    int inventory[2][3] = {{5,6,7},
                           {8,9,0}};
    
    int* itemTag = gear;
    int (*inventoryTag)[3] = inventory ;
    
    
    cout << "Character name : " << name << endl;
  
    
    
    displayItem(itemTag,inventoryTag);
    
   // swapItem(gear,inventory);
   
    
    //displayItem(gear,inventory);
    
    
    
    
    cout << "\n\n\n\n";
    for (int row = 8; row >= 1; row--)
        {
        for(int column = 1; column < row; column++)
            cout << column << " ";
            
        cout<< row << endl;    
        }
    return 0;
}



void displayItem(int* gear, int (*inventory)[3])
{   
    
    cout << &gear[0] << endl;
    cout << &gear[1] << endl;
    cout << &gear[2] << endl;
    cout << &gear[3] << endl;
    
    
      cout << "List gear : " << endl;
     for (int count = 0; count < 4; count++)
    {
        cout << "[" << count+1 << "]" <<  *(gear+count) << endl;
    }
    
    
     cout << "Inventory : " << endl;
     for (int count = 0; count < 2; count++)
    {
        for (int count_column = 0; count_column < 3; count_column++)
        {
            cout << *(*(inventory + count) + count_column) << " " ;
        }
        
        cout<< endl;
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
