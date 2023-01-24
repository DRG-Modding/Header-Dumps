#ifndef UE4SS_SDK_BP_TipJarUsable_HPP
#define UE4SS_SDK_BP_TipJarUsable_HPP

class UBP_TipJarUsable_C : public UBPInstantUsable
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 TipAmount;

    FText GetUseText(class APlayerCharacter* User);
    bool BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider);
    void SetTipAmount(int32 Credits);
    void ExecuteUbergraph_BP_TipJarUsable(int32 EntryPoint);
};

#endif
