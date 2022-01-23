#ifndef UE4SS_SDK_ITM_MissionBar_Warning_HPP
#define UE4SS_SDK_ITM_MissionBar_Warning_HPP

class UITM_MissionBar_Warning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Blink;
    class UTextBlock* DATA_Warning;
    class UImage* GradientBG;
    class UImage* IconMutator;
    class UImage* IconWarning;
    bool Is Mutator;

    void Update(FText Title, class UTexture2D* Icon, TEnumAsByte<ENUM_MenuColors::Type> Color, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void SetWarning(class UMissionWarning* Warning);
    void SetMutator(class UMissionMutator* Mutator);
    void ExecuteUbergraph_ITM_MissionBar_Warning(int32 EntryPoint, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FVector2D K2Node_Select_Default, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool K2Node_Event_IsDesignTime, class UMissionWarning* K2Node_CustomEvent_Warning, class UMissionMutator* K2Node_CustomEvent_Mutator, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
};

#endif
