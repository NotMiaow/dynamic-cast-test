#ifndef VOICE_GROUP_H__
#define VOICE_GROUP_H__

#include <string>
#include <vector>

#include "definitions.h"
#include "baseVoiceGroup.h"

struct VoiceGroup : public BaseVoiceGroup
{
    VoiceGroup();
    VoiceGroup(
        const std::string& id,
        const std::string& name,
        const VoiceGroupType& type,
        const int& userLimit,
        const std::string& categoryGroupId);
    VoiceGroup(
        const std::string& id,
        const std::string& name,
        const VoiceGroupType& type,
        const int& userLimit,
        const std::string& categoryGroupId,
        const std::vector<std::string>& voices);
    ~VoiceGroup();
    VoiceGroupType GetType() const;
};

#endif