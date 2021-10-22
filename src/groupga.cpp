#include "groupga.h"

GroupGA::GroupGA(int population)
{
    for(int i=0; i<population; i++)
    {
        GroupChromosome temp(30);
        m_individual_container.push_back(temp);
    }
}

void GroupGA::SelectionOperator()
{
    //
}


