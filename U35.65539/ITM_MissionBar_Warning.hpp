#ifndef UE4SS_SDK_ITM_MissionBar_Warning_HPP
#define UE4SS_SDK_ITM_MissionBar_Warning_HPP

class UITM_MissionBar_Warning_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Blink;
    UTextBlock* DATA_Warning;
    UImage* GradientBG;
    UImage* IconMutator;
    UImage* IconWarning;
    bool Is Mutator;

    void Update(FText Title, UTexture2D* Icon, uint8 Color, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void SetWarning(UMissionWarning* Warning);
    void SetMutator(UMissionMutator* Mutator);
    void ExecuteUbergraph_ITM_MissionBar_Warning(int32 EntryPoint, uint8 Temp_byte_Variable, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FVector2D K2Node_Select_Default, bool Temp_bool_Variable_1, uint8 K2Node_Select_Default_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool K2Node_Event_IsDesignTime, UMissionWarning* K2Node_CustomEvent_Warning, UMissionMutator* K2Node_CustomEvent_Mutator, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
}

#endif
