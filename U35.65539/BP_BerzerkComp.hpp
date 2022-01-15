#ifndef UE4SS_SDK_BP_BerzerkComp_HPP
#define UE4SS_SDK_BP_BerzerkComp_HPP

class UBP_BerzerkComp_C : UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void OnItemEquipped_Event_0(AItem* Item);
    void ExecuteUbergraph_BP_BerzerkComp(int32 EntryPoint, AItem* K2Node_CustomEvent_Item, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPickaxeItem* K2Node_DynamicCast_AsPickaxe_Item, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value);
}

#endif
