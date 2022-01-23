#ifndef UE4SS_SDK_UI_MissionStats_Item_HPP
#define UE4SS_SDK_UI_MissionStats_Item_HPP

class UUI_MissionStats_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UBorder* LineBorder;
    class UTextBlock* TitleText;
    class UTextBlock* TotalText;
    class UMissionStat* Mission Stat;
    bool IsSelected;
    FUI_MissionStats_Item_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UUI_MissionStats_Item_C* Sender);
    FUI_MissionStats_Item_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UUI_MissionStats_Item_C* Sender);
    class UTexture2D* CategoryIcon;

    bool IsInteractable();
    void SetCategoryFilter(TArray<class UTexture2D*>& Filter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
    void GetMissionStat(class UMissionStat*& Mission Stat);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCountChanged_Event(class UMissionStat* MissionStat, float Value);
    void Set Selected(bool Selected);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_MissionStats_Item(int32 EntryPoint, FText CallFunc_GetHighestStatCountAsText_ReturnValue, FExecuteUbergraph_UI_MissionStats_ItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_Selected, class UTexture2D* CallFunc_GetIcon_ReturnValue, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_2, FText CallFunc_GetStatCountTotalAsText_ReturnValue, FText CallFunc_GetLowestStatCountAsText_ReturnValue);
    void OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
    void OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
};

#endif
