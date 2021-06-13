#pragma once

#include <vector>
#include <memory>

#include "../Commands/ICommand.h"
#include "../Field.h"

class IRule
{
public:
    virtual std::vector<std::shared_ptr<ICommand>> ApplyTo(Field& field) = 0;
};