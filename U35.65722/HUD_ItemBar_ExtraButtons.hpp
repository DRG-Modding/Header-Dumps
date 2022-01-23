#ifndef UE4SS_SDK_HUD_ItemBar_ExtraButtons_HPP
#define UE4SS_SDK_HUD_ItemBar_ExtraButtons_HPP

class UHUD_ItemBar_ExtraButtons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UBorder* Border_8;
    class UBorder* Border_17;
    class UTextBlock* ButtonKey;
    class UCanvasPanel* CanvasPanel_0;
    class UBorder* Descriptions;
    class UWidgetSwitcher* InputSwitcher;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_6;
    class UTextBlock* TextBlock_7;
    class UTextBlock* TextBlock_8;
    class UTextBlock* TextBlock_11;
    class UTextBlock* TextBlock_19;
    class UTextBlock* TextBlock_20;
    class UTextBlock* TextBlock_21;
    class UTextBlock* TextBlock_22;
    class UTextBlock* TextBlock_23;
    class UTextBlock* TextBlock_24;
    class UTextBlock* TextBlock_31;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_0;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_1;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_2;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_3;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_4;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_5;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_C_6;

    void Construct();
    void OnInputSourceChanged_Event(EFSDInputSource InputSource);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_ItemBar_ExtraButtons(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGM_Tutorial_New_C* K2Node_DynamicCast_AsGM_Tutorial_New, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_HUD_ItemBar_ExtraButtonsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
