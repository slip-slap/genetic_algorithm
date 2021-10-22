#include <vector>

#include "ga_tool.h"
class GroupChromosome
{
public:
    GroupChromosome(int length);
    GroupChromosome(const GroupChromosome& another);
    GroupChromosome& operator=(const GroupChromosome& another);


public:
    void CrossoverOpeartor(GroupChromosome& another, GroupChromosome& child1,
                                                GroupChromosome& child2);
    void MutationOperator();

public:
    std::vector<int> GetChromosome();
    void SetChromosome(std::vector<int> chromo);

private:
    std::vector<int> m_chromosome_container;
    int m_chromosome_length;
};
