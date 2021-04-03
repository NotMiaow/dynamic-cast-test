#include "matchVoiceGroup.h"

MatchVoiceGroup::MatchVoiceGroup()
{
    this->id = "";
    this->teamId = -1;
    this->name = "";
    this->type = MATCH_VOICE_GROUP;
    this->userLimit = 0;
    this->categoryGroupId = "";
}

MatchVoiceGroup::MatchVoiceGroup(
    const std::string& id,
    const int& teamId,
    const std::string& name,
    const VoiceGroupType& type,
    const int userLimit,
    const std::string& categoryGroupId)
{
    this->id = id;
    this->teamId = teamId;
    this->name = name;
    this->type = type;
    this->userLimit = userLimit;
    this->categoryGroupId = categoryGroupId;
}

MatchVoiceGroup::~MatchVoiceGroup() { }

VoiceGroupType MatchVoiceGroup::GetType() const
{
    return MATCH_VOICE_GROUP;
}

void MatchVoiceGroup::Update(const MatchVoiceGroup& other)
{
    this->teamId = other.teamId;
    this->name = other.name;
    this->userLimit = other.userLimit;
}