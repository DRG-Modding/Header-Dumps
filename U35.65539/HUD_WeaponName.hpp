#ifndef UE4SS_SDK_HUD_WeaponName_HPP
#define UE4SS_SDK_HUD_WeaponName_HPP

class UHUD_WeaponName_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UTextBlock* DATA_ItemCategory;
    UTextBlock* DATA_ItemName;
    UInvalidationBox* InvalidationBox_0;
    APlayerCharacter* Character;

    void UpdateLabel(FText CallFunc_GetItemName_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_GetItemCategory_ReturnValue);
    void Construct();
    void OnItemEquipped(AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_WeaponName(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, AItem* K2Node_CustomEvent_Item, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime);
}

#endif
