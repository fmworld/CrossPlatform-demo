// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

#pragma once

#include <memory>
#include <string>

namespace helloworld {

class HelloWorld {
public:
    virtual ~HelloWorld() {}

    static std::shared_ptr<HelloWorld> create();

    virtual std::string get_hello_world() = 0;

    virtual std::string get_name() = 0;

    virtual void set_name(const std::string & name) = 0;
};

}  // namespace helloworld
