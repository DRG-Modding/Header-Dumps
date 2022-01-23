#ifndef UE4SS_SDK_BTN_ItemCategory_HPP
#define UE4SS_SDK_BTN_ItemCategory_HPP

class UBTN_ItemCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pressed;
    class UWidgetAnimation* Hover;
    class UBorder* BorderOuter;
    class UBorder* Bracket;
    class UButton* Button_0;
    class UTextBlock* DATA_CategoryTitle;
    class UTextBlock* DATA_UnlockedNumber;
    class UImage* Icon;
    class UITM_ItemUnlockedIcon_C* Notification_NewItem;
    class UOverlay* Overlay_0;
    class USizeBox* SizeBox_0;
    class UTextBlock* TEXT_Acquired;
    class UOverlay* ToolTip;
    class UImage* TooltipArrow;
    class UBorder* ToolTipBox;
    class UBorder* TooltipBracket;
    float IconSize;
    class UTexture2D* Texture;
    FText CategoryTitle;
    FBTN_ItemCategory_CButtonClicked ButtonClicked;
    void ButtonClicked();
    EVanitySlot VanitySlot;
    class UPlayerCharacterID* characterID;

    void CheckForNotification(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UVanityItem*>& CallFunc_GetVanityItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UVanityItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CheckItemUINotification_HasNotification);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Toggle(bool On);
    void SetData(class UPlayerCharacterID* characterID);
    void OnClosed();
    void ExecuteUbergraph_BTN_ItemCategory(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_CustomEvent_On, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor CallFunc_MenuColors_OutputColor_5, class UPlayerCharacterID* K2Node_CustomEvent_characterID, TArray<class UVanityItem*>& CallFunc_GetVanityItems_ReturnValue, class UVanityItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor K2Node_Select_Default, class UTexture2D* CallFunc_GetVanitySlotIcon_AsTexture_2D, TArray<class UVanityItem*>& CallFunc_GetUnLockedVanityItems_ReturnValue, class UVanityItem* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, FString CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void ButtonClicked__DelegateSignature();
};

#endif
