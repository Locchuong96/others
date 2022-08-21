### Boolean

boolean got only 2 option `true` or `false`

Example:

	#include <iostream>
	int main(){
	    bool red_light {true};
	    bool green_light {false};
	    
	    if(red_light == true){
	        std::cout << "Stop!" << std::endl;
	    }
	    else{
	        std::cout << "Go through!" << std::endl;
	    }
	    if(green_light){
	        std::cout << "The light is green!" << std::endl;
	    }
	    else{
	        std::cout << "The light is NOT green!" << std::endl;
	    }
	    return 0;
	}

Print out the value `1` = `true` and `0` = `false`

    //Printing out a bool
    // 1 --> true
    // 0 --> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    //Print out true or false
    std::cout << std::endl;
    std::cout << std::boolalpha; // Forces the output format to true/false
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;