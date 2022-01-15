#ifndef UE4SS_SDK_HUD_Frozen_HPP
#define UE4SS_SDK_HUD_Frozen_HPP

class UHUD_Frozen_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_0;
    UBorder* Border_0;
    UBorder* Border_1;
    UUI_AdvancedLabel_C* InstructionsLabel;
    UProgressBar* UnfreezeProgressBar;
    float CurrentProgress;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetProgress(float CurrentProgress);
    void ExecuteUbergraph_HUD_Frozen(int32 EntryPoint, bool Temp_bool_Variable, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, float CallFunc_GetDefrostProgress_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_CustomEvent_CurrentProgress, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
