#include "Cell.h"

Cell::Cell(Field* field, glm::ivec2 position)
    : _position(position), _field(field)
{

}

std::vector<glm::ivec2> Cell::GetNeighbors()
{
    return std::vector<glm::ivec2>{
        _position + glm::ivec2(-1, 0),
        _position + glm::ivec2(-1, 1),
        _position + glm::ivec2(0, 1),
        _position + glm::ivec2(1, 1),
        _position + glm::ivec2(1, 0),
        _position + glm::ivec2(1, -1),
        _position + glm::ivec2(0, -1),
        _position + glm::ivec2(-1, -1)
    };
}

int Cell::GetNeighborsCount()
{
    int neighborCount = 0;

    for(auto neighborPos : GetNeighbors())
    {
        if(_field->HasActiveCell(neighborPos))
            neighborCount++;
    }

    return neighborCount;
}

glm::ivec2 Cell::GetPosition()
{
    return _position;
}