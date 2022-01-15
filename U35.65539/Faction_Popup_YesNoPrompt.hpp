#ifndef UE4SS_SDK_Faction_Popup_YesNoPrompt_HPP
#define UE4SS_SDK_Faction_Popup_YesNoPrompt_HPP

class UFaction_Popup_YesNoPrompt_C : UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Yes;
    UTextBlock* DATA_Content;
    UTextBlock* DATA_Header;
    UTextBlock* DiscordMoreInfo;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_3;
    UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    void OnShow(const FText& Title, const FText& Message);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Yes();
    void No();
    void Clear Resources();
    void Add Resource(UResourceData* InResource, float InAmount);
    void SetResources(const TArray<FCraftingCost>& Resources);
    void ExecuteUbergraph_Faction_Popup_YesNoPrompt(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const FText K2Node_Event_Title, const FText K2Node_Event_Message, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UResourceData* K2Node_CustomEvent_InResource, float K2Node_CustomEvent_InAmount, const TArray<FCraftingCost>& K2Node_CustomEvent_Resources, int32 CallFunc_Array_Length_ReturnValue, FCraftingCost CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
