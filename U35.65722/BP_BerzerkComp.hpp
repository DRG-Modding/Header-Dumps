#ifndef UE4SS_SDK_BP_BerzerkComp_HPP
#define UE4SS_SDK_BP_BerzerkComp_HPP

class UBP_BerzerkComp_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void OnItemEquipped_Event_0(class AItem* Item);
    void ExecuteUbergraph_BP_BerzerkComp(int32 EntryPoint, class AItem* K2Node_CustomEvent_Item, FExecuteUbergraph_BP_BerzerkCompK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APickaxeItem* K2Node_DynamicCast_AsPickaxe_Item, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_Event_character, float K2Node_Event_value);
};

#endif
