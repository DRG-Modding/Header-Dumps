#ifndef UE4SS_SDK_UI_MissionStats_Category_HPP
#define UE4SS_SDK_UI_MissionStats_Category_HPP

class UUI_MissionStats_Category_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AllText;
    class UBorder* Background;
    class UImage* Icon;
    class UTexture2D* CategoryIcon;
    bool CategorySelected;
    bool IsAllCategory;
    FUI_MissionStats_Category_COn Clicked On Clicked;
    void On Clicked(class UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);

    void Click();
    bool IsInteractable();
    void GetCategoryIcon(class UTexture2D*& CategoryIcon);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void IsSelected(bool& CategorySelected);
    void PreConstruct(bool IsDesignTime);
    void Set Selected(bool CategorySelected);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Set Hovered(bool IsHovered);
    void ExecuteUbergraph_UI_MissionStats_Category(int32 EntryPoint, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_4, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_5, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_CategorySelected, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, bool K2Node_CustomEvent_IsHovered, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_3, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3, FLinearColor CallFunc_MenuColors_OutputColor_3, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void On Clicked__DelegateSignature(class UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);
};

#endif
