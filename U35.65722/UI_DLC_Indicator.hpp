#ifndef UE4SS_SDK_UI_DLC_Indicator_HPP
#define UE4SS_SDK_UI_DLC_Indicator_HPP

class UUI_DLC_Indicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* DLC_SizeBox;
    class UCanvasPanel* Root_Canvas;
    int32 Size;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    class UDLCBase* dlc;

    void SetFromDLC(class UDLCBase* InFromDLC, bool IsUnlocked, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SetFromSkin(class UItemSkin* InItem, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_DLC_Indicator(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
