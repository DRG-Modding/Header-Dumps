#ifndef UE4SS_SDK_BP_EscortCannisterUsable_HPP
#define UE4SS_SDK_BP_EscortCannisterUsable_HPP

class UBP_EscortCannisterUsable_C : public UBPInstantUsable
{

    bool BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider);
};

#endif
