#ifndef UE4SS_SDK_BP_DiscordInstantUsable_HPP
#define UE4SS_SDK_BP_DiscordInstantUsable_HPP

class UBP_DiscordInstantUsable_C : public UBPInstantUsable
{

    bool BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider);
};

#endif
