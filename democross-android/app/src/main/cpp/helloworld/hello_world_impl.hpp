#pragma once

#include "hello_world.hpp"
#include <string>

namespace helloworld {

	class HelloWorldImpl : public helloworld::HelloWorld {
    private:
        std::string myName;
    
	public:
    
    	// Constructor
    	HelloWorldImpl();
    
    	// Our method that returns a string
    	std::string get_hello_world();
        
        std::string get_name();
        
        void set_name(const std::string & name);
    
	};

}
