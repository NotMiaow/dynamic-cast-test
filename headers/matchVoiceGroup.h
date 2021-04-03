#ifndef MATCH_VOICE_GROUP_H__
#define MATCH_VOICE_GROUP_H__

#include <string>
#include <vector>

#include "definitions.h"
#include "baseVoiceGroup.h"

struct MatchVoiceGroup : public BaseVoiceGroup
{
    MatchVoiceGroup();
    MatchVoiceGroup(
        const std::string& id,
        const int& teamId,
        const std::string& name,
        const VoiceGroupType& type,
        const int userLimit,
        const std::string& matchGroupId);
    ~MatchVoiceGroup();
    
    VoiceGroupType GetType() const;
    void Update(const MatchVoiceGroup& other);

    int teamId;
    std::vector<std::string> matchParticipants;
};

#endif