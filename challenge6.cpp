/* Pseudo
1. Declarations
    a. 
        P - Print numbers
        A - Add a number
        M - Display mean of the numbers
        S - Display the smallest number
        L - Display the largest number
        Q - Quit
    b. Declare a vector to be utilized
2. Prompt the user for an answer based on the options(can be capital and non-capital)
    a.If the answer is not on there, prompt the user for an answer again
3. Make a switch case statement that compares the user input with all the avaliable options
    a.  If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
        If the list is empty you should display "[] - the list is empty"
        If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
        For example, [ 1 2 3 4 5 ]
    b.  If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
        which you will add to the list and then display it was added. For example, if the user enters 5
        You should display, "5 added".
        Duplicate list entries are OK
        Use the pushback method
    c.  If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
        If the list is empty you should display, "Unable to calculate the mean - no data"
    d.  If the user enters 'S' or 's' you should display the smallest element in the list.
        For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
        If the list is empty you should display, "Unable to determine the smallest number - list is empty"
    e.  If the user enters 'L' or 'l' you should display the largest element in the list
        For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
        If the list is empty you should display, "Unable to determine the largest number - list is empty"   
    f.  If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.
4. Make sure when the enter a char, it doesnt stop running the program
Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
*/


/*Current issuem when you activate the program, it wont continue after you finish one of the prompts it takes you through
Make it so you can add a number to the vector without ending the program. a*/

/*Current issues:
- The largest number is not displaying the largest number but the first number it comes across
- Q is displaying as an invcalid selection

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    char selection;
    vector<int>user_nums;

    cout<<"Welcome to this Program"<<endl;
    do{
        
    cout<<"===========\n"
    <<"Enter one of the following characters: \n"
     <<"P - Print numbers\n"
     <<"A - Add a number\n"
     <<"M - Display mean of the numbers\n"
     <<"S - Display the smallest number\n"
     <<"L - Display the largest number\n"
     <<"Q - Quit\n"
     <<"===========\n"
     <<"Enter here:";
    cin>>selection;
       
        
    switch(selection){

        case 'P':
        case 'p':{
            if (user_nums.empty()){
                cout<<"The vec is empty";
            }else{
                for(int i(0);i<user_nums.size();i++){
                    cout<<i<<" "<<user_nums[i];
                }}break;
                }

        case 'A':
        case 'a':{
            int num_to_add;
            cout<<"Enter the number you want to add to the vector:";
            cin>>num_to_add;
            user_nums.push_back(num_to_add);
            cout<<"Number:()"<<num_to_add<<") added to the list."<<endl;
            break;
                }

        case 'M':
        case 'm':{
            if(user_nums.empty()){
                cout<<"Unable to calculate the mean; no data";
            }else{
                int total(0);
             for(int num : user_nums){
                total+=num;
                
            }
        }break;
        }
        case 'S':
        case 's':{
            if(user_nums.empty()){
                cout<<"Unable to determine the smallest number - list is empty"<<endl;        
            }else{
                int smallest_num(0);
                for(int i(0);i<user_nums.size();i++){
                    if(user_nums[i]<user_nums[smallest_num]){
                        smallest_num=i;
                    }cout<<"The smallest num is: "<<smallest_num;
                }
            }
        }
        case 'L':
        case 'l':{
            if(user_nums.empty()){
                cout<<"Unable to determine the smallest number - list is empty "<<endl;
            } else{
                int largest_num(0);
                for(int i(0);i<user_nums.size();i++){
                    if(user_nums[i]>user_nums[largest_num]){
                        largest_num=i;
                    }cout<<"The largest num is:"<<largest_num;
                }
            }
        }
        default:
        cout<<"Inavlid selection";
        break;
    }
 }while(selection != 'Q' && selection != 'q');
 if(selection=='Q' || selection =='q' ){
    /*Make it end the whole program here*/

 }
}