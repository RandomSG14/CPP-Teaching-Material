#include <iostream>
#include <utility>

// defining the number of column for 2D Array
#define col_array 3


//Functions Prototype
void displayItem(int* gear, int (*inventory)[col_array]);
void swapItem(int gear[], int (*inventory)[col_array]);


// Reducing programmer hassle from typing std:: each time
using namespace std;

// Main Functions
int main()
{
    // Declaring variables for Character name variable
    // and Gear (equipped item) slot & inventory slot variables
    string name = "Sora";
    int gear[4] = {1,2,3,4};
    int inventory[2][3] = {{5,6,7},
                           {8,9,0}};
    
    // Declaring pointers
    // itemTag now holds addresses of array of gear
    int* itemTag = gear;
    
    // inventoryTag holds addresses of array of inventory
    int (*inventoryTag)[3] = inventory ;
    
    
    cout << "Character name : " << name << endl;
  
    
    //Calling Functions
    displayItem(itemTag,inventoryTag);
    
    swapItem(gear,inventory);
   
    displayItem(gear,inventory);
    
    
    
    // Fun looping to create pyramid of numbers 1-8
    // Just for fun
    cout << "\n\n\n\n";
    for (int row = 8; row >= 1; row--)
        {
        for(int column = 1; column < row; column++)
            cout << column << " ";
            
        cout<< row << endl;    
        }
    return 0;
}



// Diplay Gear slot & Inventory slot function
void displayItem(int* gear, int (*inventory)[col_array])
{   
    
    cout << endl;
    
    
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


// Swap Gear with Inventory function
void swapItem(int gear[], int (*inventory)[col_array])
{   
     cout << "Which gear do you want to swap out ?" << endl;
    for (int count = 0; count < 4; count++)
    {
        cout << "[" << count+1 << "]" <<  *(gear+count) << endl;
    }
    
    int select_gear = 0;
    cin >> select_gear;
    
    int temp = *(gear+(select_gear-1));
    
    cout << "To which item you want to swap ?" << endl;
    for (int count = 0; count < 2; count++)
    {
        for (int count_column = 0; count_column < 3; count_column++)
        {
            if( count > 0)
            {
                cout << "[" << count_column+4 << "]" << *(*(inventory + count) + count_column) << endl ;
            }
            
            else
                cout << "[" << count_column+1 << "]" << *(*(inventory + count) + count_column) << endl ;
        }
        
        cout<< endl;
    }
    
    int select_inventory = 0;
    cin >> select_inventory;
    
    
    
    
    // selecting which array depend on user input

    if(select_inventory >= 1 && select_inventory <= 3)
        {
            //* This is old way to swap values , using temp. use this if programmer forgot to include <utilities>
        // *(gear + (select_gear - 1)) = *(*(inventory + 0) + (select_inventory-1) );
        // *(*(inventory + 0) + (select_inventory-1) ) = temp;
        
         // only usable if <utilities> is declared
        swap(*(gear + (select_gear - 1)), *(*(inventory + 0) + (select_inventory - 1)));
        
        cout << "Gear is : " << *(gear+(select_gear-1)) << endl;
        cout << "Inventory is : " << *(*(inventory + 0) + (select_inventory-1) ) << endl;
        }
    else if (select_inventory >= 4 && select_inventory <= 6)
         {
             
        //* This is old way to swap values , using temp. use this if programmer forgot to include <utilities>
        //  *(gear + (select_gear - 1)) = *(*(inventory + 1) + (select_inventory-1) );
        //  *(*(inventory + 1) + (select_inventory-1)) = temp;
        
        
        // only usable if <utilities> is declared
        swap(*(gear + (select_gear - 1)),  *(*(inventory + 1) + (select_inventory - 1)));
         
         cout << "Gear is : " << *(gear+(select_gear-1)) << endl;
         cout << "Inventory is : " << *(*(inventory + 1) + (select_inventory-1)) << endl;
         }
        
    else
        cout << "wrong input" << endl;
        
    
    
    
    cout << "\n\n";
}
