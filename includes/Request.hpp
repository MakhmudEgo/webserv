//
// Created by Mahmud Jego on 2/25/21.
//

#ifndef REQUEST_HPP
#define REQUEST_HPP

#include "includes.h"

class Request {
public:
	void setValue(const std::string &value);

private:
	std::string _value;
};


#endif //REQUEST_HPP
