#ifndef UE4SS_SDK_InfoScreen_WarningWindow_HPP
#define UE4SS_SDK_InfoScreen_WarningWindow_HPP

class UInfoScreen_WarningWindow_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation_1;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    UBlurBackground_C* BlurBackground;
    UBlurBackground_C* BlurBackground_C_0;
    UBlurBackground_C* BlurBackground_C_1;
    UTextBlock* TEXT_Main;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_2;
    UWarningBox_C* WarningBox;
    UWarningBox_C* WarningBox_0;

    void SetUpgradeSeenIfFirstSession(UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_InfoScreen_WarningWindow(int32 EntryPoint, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetTotalCharacterXP_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime);
}

#endif
