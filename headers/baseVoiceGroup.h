#ifndef BASE_VOICE_GROUP_H__
#define BASE_VOICE_GROUP_H__

#include <string>
#include <vector>

#include "definitions.h"

struct BaseVoiceGroup
{
    virtual ~BaseVoiceGroup() { }
    VoiceGroupType GetType() const { return DISCUSSION_VOICE_GROUP; }

    std::string id;
    std::string name;
    VoiceGroupType type;
    int userLimit;

    std::vector<std::string> voices;
    std::string categoryGroupId;
};

#endif