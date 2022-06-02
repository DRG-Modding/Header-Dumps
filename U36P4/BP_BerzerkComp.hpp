#ifndef UE4SS_SDK_BP_BerzerkComp_HPP
#define UE4SS_SDK_BP_BerzerkComp_HPP

class UBP_BerzerkComp_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void OnItemEquipped_Event_0(class AItem* Item);
    void ExecuteUbergraph_BP_BerzerkComp(int32 EntryPoint);
};

#endif
