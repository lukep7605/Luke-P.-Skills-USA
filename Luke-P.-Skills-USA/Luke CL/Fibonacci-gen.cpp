#include <iostream>
#include <vector>

int main(){

std::vector<int> fib = {0, 1}; //Creates vector to store fibonacci sequence
std::string input; //takes command input to assign an integer to a switch

int sinput; //switch case value to preform proper tast

int aindx = 0; //used to take a value of an index of the vector
int bindx = 1; //used to take a value of an index of the vector

int numb = 1; //used when the number of the sequence is desired w/ output

    std::cin >> input; //detects for command line input and gives an int value to the respond that the switch responds to
if(input == "--help"){ 
        sinput = 1;
        }
        else if(input == "--count--one-line"){
        sinput = 2;
        }
        else if(input == "--count"){
        sinput = 3;
        }
        else if(input == "--count--numbering"){
        sinput = 4;
        }
        else if(input == "--count--one-line--numbering"){
        sinput = 5;
        }
        else if(input == "--count--last-only"){
        sinput = 6;
        }
switch(sinput){

    case 1: //outputs the help text
            std::cout << "Example of Sequence: --count--one-line--last-only--numbering--help";
            std::cout << "--help : Print this help\n";
            std::cout << "--count : Calculate to this many places. IE: 0, 1, 1, 2, 3, 5 would be the result of 6\n";
            std::cout << "--one-line: Print all the numbers on one line, separated by commas. Without this option, each number in the sequence will be printed on a new line\n";
            std::cout << "--numbering: Preface each number in the sequence with it's placement: IE for 6 --numbering --one-line' you would get this: '1:0, 2:1, 3:1, 4:2, 5:3, 6:5' where the first number is the count and the second is the Fibonacci sequence. Note: this argument should work with all other arguments.\n";
            std::cout << "--last-only: Only print the last number in the sequence\n";
        break;
    case 2:// outputs the desired sequence for a one line response
            int count; 
            std::cout << "Desired length of sequence?\n";
            std::cin >> count;
        for(int i = 0; i <= (count - 3); i++){
            //adds a third value two the vector in accordance to desired sequence
            fib.push_back(fib[aindx] + fib[bindx]); 
            //increase the index value so above step can be repeated with following numbers
            aindx = aindx + 1;
            bindx = bindx + 1;
                }
        for(int x : fib){
                std::cout << x << ", "; //outputs the series in proper format
                }
        break;
    case 3:// outputs the desired sequence for a multiple line response 
            std::cout << "Desired length of sequence?\n";
            std::cin >> count;
            for(int i = 0; i <= (count - 3); i++){
                //adds a third value two the vector in accordance to desired sequence
                fib.push_back(fib[aindx] + fib[bindx]);
                //increase the index value so above step can be repeated with following numbers
                aindx = aindx + 1;
                bindx = bindx + 1;
                }
            for(int x : fib){
                    std::cout << x << "\n";//outputs the series in proper format
                }
        break;
    case 4:// outputs the desired sequence for a multiple line response w/ numbering of series 
            std::cout << "Desired length of sequence?\n";
            std::cin >> count;
            for(int i = 0; i <= (count - 3); i++){
                //adds a third value two the vector in accordance to desired sequence
                fib.push_back(fib[aindx] + fib[bindx]);
                //increase the index value so above step can be repeated with following numbers
                aindx = aindx + 1;
                bindx = bindx + 1;
                }
            for(int x : fib){
                    std::cout << numb << ":" << x << "\n"; //outputs the series in proper format
                    numb = numb + 1; //increase numbering of sequence
                }
        break;
    case 5:// outputs the desired sequence for a single line response w/ numbering of series 
            std::cout << "Desired length of sequence?\n";
            std::cin >> count;
            for(int i = 0; i <= (count - 3); i++){    
                //adds a third value two the vector in accordance to desired sequence
                fib.push_back(fib[aindx] + fib[bindx]);
                //increase the index value so above step can be repeated with following numbers
                aindx = aindx + 1;
                bindx = bindx + 1;
                }
            for(int x : fib){
                    std::cout << numb << ":" << x << "\n"; //outputs the series in proper format
                    numb = numb + 1; //increase numbering of sequence
                }

        break;
    case 6:// outputs desired response for the last value only
            std::cout << "Desired length of sequence?\n";
            std::cin >> count;
            for(int i = 0; i <= (count - 3); i++){
                //adds a third value two the vector in accordance to desired sequence
                fib.push_back(fib[aindx] + fib[bindx]);
                //increase the index value so above step can be repeated with following numbers
                aindx = aindx + 1;
                bindx = bindx + 1;
                }
            
            int fsize = fib.size(); //calculates size of index
            int fout = fib[(fsize - 1)];//finds the value of the final index
            std::cout << fout; //outputs the final value of the sequence
        break;

        }

system("pause");

}

