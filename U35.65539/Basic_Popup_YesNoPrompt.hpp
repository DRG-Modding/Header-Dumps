#ifndef UE4SS_SDK_Basic_Popup_YesNoPrompt_HPP
#define UE4SS_SDK_Basic_Popup_YesNoPrompt_HPP

class UBasic_Popup_YesNoPrompt_C : UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Yes;
    UTextBlock* DATA_Content;
    UTextBlock* DATA_Header;
    UITM_MenuBackground_C* ITM_MenuBackground;
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
    void SetMappedResources(const TMap<UResourceData*, int32>& Resources);
    void ExecuteUbergraph_Basic_Popup_YesNoPrompt(int32 EntryPoint, const UResourceData* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const FText K2Node_Event_Title, const FText K2Node_Event_Message, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UResourceData* K2Node_CustomEvent_InResource, float K2Node_CustomEvent_InAmount, const TArray<FCraftingCost>& K2Node_CustomEvent_Resources, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const TMap<UResourceData*, int32> K2Node_Event_resources, bool CallFunc_Less_IntInt_ReturnValue, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const UResourceData* Temp_object_Variable_1, FCraftingCost CallFunc_Array_Get_Item_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
