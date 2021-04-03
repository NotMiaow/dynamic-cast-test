#include <iostream>

#include <map>
#include <string>

#include "baseVoiceGroup.h"
#include "voiceGroup.h"
#include "matchVoiceGroup.h"

std::map<std::string, BaseVoiceGroup*> m_voiceGroups;

MatchVoiceGroup GetMatchVoiceGroup(const std::string& key)
{
    auto it = m_voiceGroups.find(key);
    if(it == m_voiceGroups.end())
    {
        std::cout << "could not retrieve BaseVoiceGroup" << std::endl;
        return MatchVoiceGroup();
    }

    MatchVoiceGroup* castedFromFindIterator = dynamic_cast<MatchVoiceGroup*>(it->second);
    if(castedFromFindIterator == nullptr)
    {
        std::cout << "dynamic casting with find iterator failed" << std::endl;
        return MatchVoiceGroup();
    }
    return *castedFromFindIterator;
}

int main()
{
    MatchVoiceGroup matchVoiceGroup(
        "123456789",
        23,
        "turtles-are-cool",
        MATCH_VOICE_GROUP,
        20,
        "987654321"
    );
    MatchVoiceGroup* pointer = new MatchVoiceGroup(matchVoiceGroup);

    auto status = m_voiceGroups.insert(std::make_pair(pointer->id, pointer));
    if(!status.second)
    {
        std::cout << "insertion failed" << std::endl;
        return 1;
    }

    MatchVoiceGroup* castedFromInsertionIterator = dynamic_cast<MatchVoiceGroup*>(status.first->second);
    if(castedFromInsertionIterator == nullptr)
    {
        std::cout << "dynamic casting with insertion iterator failed" << std::endl;
        return 1;
    }

    auto it = m_voiceGroups.find(status.first->first);
    if(it == m_voiceGroups.end())
    {
        std::cout << "could not retrieve BaseVoiceGroup" << std::endl;
        return 1;
    }

    MatchVoiceGroup* castedFromFindIterator = dynamic_cast<MatchVoiceGroup*>(it->second);
    if(castedFromFindIterator == nullptr)
    {
        std::cout << "dynamic casting with find iterator failed" << std::endl;
        return 1;
    }

    GetMatchVoiceGroup(status.first->first);

    for(auto&& vg : m_voiceGroups)
        delete vg.second;
    return 0;
}