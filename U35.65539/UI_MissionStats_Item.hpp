#ifndef UE4SS_SDK_UI_MissionStats_Item_HPP
#define UE4SS_SDK_UI_MissionStats_Item_HPP

class UUI_MissionStats_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon;
    UBorder* LineBorder;
    UTextBlock* TitleText;
    UTextBlock* TotalText;
    UMissionStat* Mission Stat;
    bool IsSelected;
    FUI_MissionStats_Item_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(UUI_MissionStats_Item_C* Sender);
    FUI_MissionStats_Item_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(UUI_MissionStats_Item_C* Sender);
    UTexture2D* CategoryIcon;

    bool IsInteractable();
    void SetCategoryFilter(TArray<UTexture2D*>& Filter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
    void GetMissionStat(UMissionStat*& Mission Stat);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCountChanged_Event(UMissionStat* MissionStat, float Value);
    void Set Selected(bool Selected);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_MissionStats_Item(int32 EntryPoint, FText CallFunc_GetHighestStatCountAsText_ReturnValue, StatCountChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_Selected, UTexture2D* CallFunc_GetIcon_ReturnValue, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_2, FText CallFunc_GetStatCountTotalAsText_ReturnValue, FText CallFunc_GetLowestStatCountAsText_ReturnValue);
    void OnHoverEnd__DelegateSignature(UUI_MissionStats_Item_C* Sender);
    void OnHoverBegin__DelegateSignature(UUI_MissionStats_Item_C* Sender);
}

#endif
