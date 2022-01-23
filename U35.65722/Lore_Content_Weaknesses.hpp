#ifndef UE4SS_SDK_Lore_Content_Weaknesses_HPP
#define UE4SS_SDK_Lore_Content_Weaknesses_HPP

class ULore_Content_Weaknesses_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UHorizontalBox* HorizontalBox_IconHolder;
    class ULore_DamageTypeIcon_C* Lore_DamageTypeIcon;
    class ULore_DamageTypeIcon_C* Lore_DamageTypeIcon_191;
    class UTextBlock* TextBlock_Header;
    FText Text;
    bool HasFadedIn;
    int32 NumbOfIcons;

    void PreConstruct(bool IsDesignTime);
    void ClearChildren();
    void AddIcon(FDamageTypeDescription Icon);
    void PlayFade(bool Forward);
    void ExecuteUbergraph_Lore_Content_Weaknesses(int32 EntryPoint, bool Temp_bool_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_2, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, FDamageTypeDescription K2Node_CustomEvent_Icon, const FVector2D Temp_struct_Variable, FMargin K2Node_MakeStruct_Margin, bool K2Node_CustomEvent_Forward, bool Temp_bool_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class ULore_DamageTypeIcon_C* CallFunc_Create_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
