#include "group_chromosome.h"

class GroupGA
{

public:
    GroupGA(int population);
    void SelectionOperator();
    void CrossoverOperator();

private:
    std::vector<GroupChromosome> m_individual_container;
};
