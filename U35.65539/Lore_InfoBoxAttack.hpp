#ifndef UE4SS_SDK_Lore_InfoBoxAttack_HPP
#define UE4SS_SDK_Lore_InfoBoxAttack_HPP

class ULore_InfoBoxAttack_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_BG_CutCorner_C* Basic_BG_Window_59;
    ULore_DamageTypeIcon_C* Lore_DamageTypeIcon;
    UTextBlock* TextBlock_Grayed;
    UTextBlock* TextBlock_TextBody;
    FText Text;
    FDamageTypeDescription Icon;
    FText GrayText;

    void SetData(FText Text, FDamageTypeDescription Icon, FText GrayText);
    void PreConstruct(bool IsDesignTime);
    void SetColor(FLinearColor InColorAndOpacity);
    void ExecuteUbergraph_Lore_InfoBoxAttack(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor K2Node_CustomEvent_InColorAndOpacity, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_CustomEvent_Text, FDamageTypeDescription K2Node_CustomEvent_Icon, FText K2Node_CustomEvent_GrayText, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
}

#endif
