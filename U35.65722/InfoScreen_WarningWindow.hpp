#ifndef UE4SS_SDK_InfoScreen_WarningWindow_HPP
#define UE4SS_SDK_InfoScreen_WarningWindow_HPP

class UInfoScreen_WarningWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation_1;
    class UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UBlurBackground_C* BlurBackground;
    class UBlurBackground_C* BlurBackground_C_0;
    class UBlurBackground_C* BlurBackground_C_1;
    class UTextBlock* TEXT_Main;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_2;
    class UWarningBox_C* WarningBox;
    class UWarningBox_C* WarningBox_0;

    void SetUpgradeSeenIfFirstSession(class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_InfoScreen_WarningWindow(int32 EntryPoint, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetTotalCharacterXP_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime);
};

#endif
