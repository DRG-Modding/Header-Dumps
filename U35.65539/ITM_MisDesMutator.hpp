#ifndef UE4SS_SDK_ITM_MisDesMutator_HPP
#define UE4SS_SDK_ITM_MisDesMutator_HPP

class UITM_MisDesMutator_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BlinkMutator;
    UWidgetAnimation* BlinkWarning;
    UImage* BlinkOverlay;
    UTextBlock* DATA_Modifier;
    UImage* GradientBG;
    UImage* IconModifier;
    USizeBox* SizeBox_Height;
    FLinearColor WarningTint;
    bool IsWarning;
    bool LeftAlign;
    float Heigh;

    void SetWarning(UMissionWarning* Warning);
    void SetAnomaly(UMissionMutator* Mutator);
    void SetVisuals(FText Title, UTexture2D* Icon, uint8 Color);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisDesMutator(int32 EntryPoint, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_LinearColor_ToNewOpacity_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UMissionWarning* K2Node_CustomEvent_Warning, UMissionMutator* K2Node_CustomEvent_Mutator, FText K2Node_CustomEvent_Title, UTexture2D* K2Node_CustomEvent_Icon, uint8 K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_LinearColor_ToNewOpacity_ReturnValue_1, bool Temp_bool_Variable, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, uint8 K2Node_Select_Default, bool K2Node_Event_IsDesignTime, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, float CallFunc_SelectFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_4, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_3);
}

#endif
