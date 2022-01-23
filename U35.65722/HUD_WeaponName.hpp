#ifndef UE4SS_SDK_HUD_WeaponName_HPP
#define UE4SS_SDK_HUD_WeaponName_HPP

class UHUD_WeaponName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UTextBlock* DATA_ItemCategory;
    class UTextBlock* DATA_ItemName;
    class UInvalidationBox* InvalidationBox_0;
    class APlayerCharacter* Character;

    void UpdateLabel(FText CallFunc_GetItemName_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_GetItemCategory_ReturnValue);
    void Construct();
    void OnItemEquipped(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_WeaponName(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_HUD_WeaponNameK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AItem* K2Node_CustomEvent_Item, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime);
};

#endif
