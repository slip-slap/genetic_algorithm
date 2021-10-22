
#include "group_chromosome.h"
GroupChromosome::GroupChromosome(int max_length)
{
    m_chromosome_length = max_length;
    GenerateRandomBinaryString(m_chromosome_container, m_chromosome_length);
}

GroupChromosome::GroupChromosome(const GroupChromosome &another)
{
    m_chromosome_length = another.m_chromosome_length;
    m_chromosome_container = another.m_chromosome_container;
}

void GroupChromosome::CrossoverOpeartor(GroupChromosome &another, GroupChromosome &child1, GroupChromosome &child2)
{
    std::vector<int> bits1 = this->m_chromosome_container;
    std::vector<int> bits2 = another.GetChromosome();
    CombineTwoChromosome(bits1, bits2);
    child1.SetChromosome(bits1);
    child2.SetChromosome(bits2);
}

std::vector<int> GroupChromosome::GetChromosome()
{
    return m_chromosome_container;
}

void GroupChromosome::SetChromosome(std::vector<int> chromo)
{
    m_chromosome_container = chromo;
}
