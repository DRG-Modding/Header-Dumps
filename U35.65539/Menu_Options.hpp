#ifndef UE4SS_SDK_Menu_Options_HPP
#define UE4SS_SDK_Menu_Options_HPP

class UMenu_Options_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    UBasic_ButtonTab_C* BTN_Audio;
    UBasic_ButtonTab_C* BTN_Controls;
    UBasic_ButtonTab_C* BTN_Credits;
    UBasic_ButtonTab_C* BTN_Gameplay;
    UBasic_ButtonTab_C* BTN_Graphics;
    UBasic_ButtonTab_C* BTN_Layout;
    UBasic_ButtonTab_C* BTN_Privacy;
    UBasic_ButtonTab_C* BTN_Saves;
    UBasic_ButtonTab_C* BTN_UI;
    UWidgetSwitcher* ContentSwitcher;
    UUI_AdvancedLabel_C* OptionIconNext;
    UUI_AdvancedLabel_C* OptionIconPrev;
    UOptions_Tab_Audio_C* Options_Tab_Audio;
    UOptions_ControlLayout_C* Options_Tab_ControlLayout;
    UOptions_Tab_Controls_C* Options_Tab_Controls;
    UOptions_Tab_Gameplay_C* Options_Tab_Gameplay;
    UOptions_Tab_GFX_C* Options_Tab_GFX;
    UOptions_Tab_Privacy_C* Options_Tab_Privacy;
    UOptions_Tab_Saves_C* Options_Tab_Saves;
    UOptions_Tab_UI_C* Options_Tab_UI;
    UBasic_ButtonTab_C* ActiveTabButton;
    int32 CurrTabIndex;
    TArray<UBasic_ButtonTab_C*> Tabs;
    TArray<UUserWidget*> Pages;
    FMenu_Options_CCreditsClicked CreditsClicked;
    void CreditsClicked();

    void ReplaceGFXOptionsWithConsoleGFOptions();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventint32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    void DeselectTab(UBasic_ButtonTab_C* Tab, bool CallFunc_IsValid_ReturnValue);
    void SelectTab(int32 Index, bool WithSound, UUserWidget* CallFunc_Array_Get_Item, UBasic_ButtonTab_C* CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void Construct();
    void SelectFirstTab();
    void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature();
    void BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
    void OnClosed();
    void OnShown();
    void BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void UpdateTabs(EFSDInputSource InputSource);
    void BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BTN_Saves_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Menu_Options(int32 EntryPoint, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility Temp_byte_Variable, EFSDTargetPlatform Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, EFSDTargetPlatform Temp_byte_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool K2Node_Select_Default, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_3, int32 CallFunc_Array_Find_ReturnValue_4, int32 CallFunc_Array_Find_ReturnValue_5, int32 CallFunc_Array_Find_ReturnValue_6, bool CallFunc_Array_RemoveItem_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, EFSDInputSource CallFunc_GetInputSource_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_3, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool Temp_bool_Variable_8, ESlateVisibility K2Node_Select_Default_2, TArray<UBasic_ButtonTab_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Find_ReturnValue_7, TArray<UUserWidget*>& K2Node_MakeArray_Array_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3);
    void CreditsClicked__DelegateSignature();
}

#endif
