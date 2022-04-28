#ifndef UE4SS_SDK_BP_PetUsable_HPP
#define UE4SS_SDK_BP_PetUsable_HPP

class UBP_PetUsable_C : public UBPInstantUsable
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider);
    void ReceiveBeginPlay();
    void OnUsedBy_Event_0(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_PetUsable(int32 EntryPoint);
};

#endif
