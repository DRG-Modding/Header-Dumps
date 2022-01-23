#ifndef UE4SS_SDK_ITM_LoadOut_PerksEquip_None_HPP
#define UE4SS_SDK_ITM_LoadOut_PerksEquip_None_HPP

class UITM_LoadOut_PerksEquip_None_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UBorder* FrameBorder;
    class UBorder* SelectionBorder;
    bool ItemHovered;
    FITM_LoadOut_PerksEquip_None_COnClicked OnClicked;
    void OnClicked();

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Refresh();
    void ExecuteUbergraph_ITM_LoadOut_PerksEquip_None(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, ESlateVisibility K2Node_Select_Default);
    void OnClicked__DelegateSignature();
};

#endif
