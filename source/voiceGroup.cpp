#include "voiceGroup.h"

VoiceGroup::VoiceGroup()
{
    this->id = "";
    this->name = "";
    this->type = DISCUSSION_VOICE_GROUP;
    this->userLimit = 0;
    this->categoryGroupId = "";
}
VoiceGroup::VoiceGroup(
    const std::string& id,
    const std::string& name,
    const VoiceGroupType& type,
    const int& userLimit,
    const std::string& categoryGroupId)
{
    this->id = id;
    this->name = name;
    this->type = type;
    this->userLimit = userLimit;
    this->categoryGroupId = categoryGroupId;
}

VoiceGroup::VoiceGroup(
    const std::string& id,
    const std::string& name,
    const VoiceGroupType& type,
    const int& userLimit,
    const std::string& categoryGroupId,
    const std::vector<std::string>& voices)
{
    this->id = id;
    this->name = name;
    this->type = type;
    this->userLimit = userLimit;
    this->categoryGroupId = categoryGroupId;
    this->voices = voices;
}

VoiceGroup::~VoiceGroup() { }

VoiceGroupType VoiceGroup::GetType() const
{
    return DISCUSSION_VOICE_GROUP;
}
