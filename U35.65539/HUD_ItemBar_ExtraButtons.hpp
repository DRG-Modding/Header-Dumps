#ifndef UE4SS_SDK_HUD_ItemBar_ExtraButtons_HPP
#define UE4SS_SDK_HUD_ItemBar_ExtraButtons_HPP

class UHUD_ItemBar_ExtraButtons_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UBorder* Border_8;
    UBorder* Border_17;
    UTextBlock* ButtonKey;
    UCanvasPanel* CanvasPanel_0;
    UBorder* Descriptions;
    UWidgetSwitcher* InputSwitcher;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_5;
    UTextBlock* TextBlock_6;
    UTextBlock* TextBlock_7;
    UTextBlock* TextBlock_8;
    UTextBlock* TextBlock_11;
    UTextBlock* TextBlock_19;
    UTextBlock* TextBlock_20;
    UTextBlock* TextBlock_21;
    UTextBlock* TextBlock_22;
    UTextBlock* TextBlock_23;
    UTextBlock* TextBlock_24;
    UTextBlock* TextBlock_31;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_0;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_1;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_2;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_3;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_4;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_5;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_C_6;

    void Construct();
    void OnInputSourceChanged_Event(EFSDInputSource InputSource);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_ItemBar_ExtraButtons(int32 EntryPoint, UGameModeBase* CallFunc_GetGameMode_ReturnValue, UGM_Tutorial_New_C* K2Node_DynamicCast_AsGM_Tutorial_New, bool K2Node_DynamicCast_bSuccess, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
