#ifndef UE4SS_SDK_ITM_MisDesMutator_HPP
#define UE4SS_SDK_ITM_MisDesMutator_HPP

class UITM_MisDesMutator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BlinkMutator;
    class UWidgetAnimation* BlinkWarning;
    class UImage* BlinkOverlay;
    class UTextBlock* DATA_Modifier;
    class UImage* GradientBG;
    class UImage* IconModifier;
    class USizeBox* SizeBox_Height;
    FLinearColor WarningTint;
    bool IsWarning;
    bool LeftAlign;
    float Heigh;

    void SetWarning(class UMissionWarning* Warning);
    void SetAnomaly(class UMissionMutator* Mutator);
    void SetVisuals(FText Title, class UTexture2D* Icon, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisDesMutator(int32 EntryPoint, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_LinearColor_ToNewOpacity_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMissionWarning* K2Node_CustomEvent_Warning, class UMissionMutator* K2Node_CustomEvent_Mutator, FText K2Node_CustomEvent_Title, class UTexture2D* K2Node_CustomEvent_Icon, TEnumAsByte<ENUM_MenuColors::Type> K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_LinearColor_ToNewOpacity_ReturnValue_1, bool Temp_bool_Variable, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, float CallFunc_SelectFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_4, FMargin K2Node_MakeStruct_Margin_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_3);
};

#endif
