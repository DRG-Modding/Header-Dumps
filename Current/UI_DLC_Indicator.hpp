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

    void SetFromDLC(class UDLCBase* InFromDLC);
    void SetFromSkin(class UItemSkin* InItem);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_DLC_Indicator(int32 EntryPoint);
};

#endif
