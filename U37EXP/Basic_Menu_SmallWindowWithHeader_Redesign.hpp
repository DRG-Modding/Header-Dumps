#ifndef UE4SS_SDK_Basic_Menu_SmallWindowWithHeader_Redesign_HPP
#define UE4SS_SDK_Basic_Menu_SmallWindowWithHeader_Redesign_HPP

class UBasic_Menu_SmallWindowWithHeader_Redesign_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBorder* Brackets;
    class USizeBox* CornerDoubleBars_Left;
    class USizeBox* CornerDoubleBars_Right;
    class UTextBlock* Counter;
    class UTextBlock* DATA_headerText;
    class UBorder* DoubleBar_Left1;
    class UBorder* DoubleBar_Left2;
    class UBorder* DoubleBar_Right1;
    class UBorder* DoubleBar_Right2;
    class UBorder* HeaderBG;
    class UBorder* MainBG;
    class UNamedSlot* PutStuffHere;
    class UButton* WindowButton;
    FText HeaderText;
    bool ShowCounter;
    bool WindowIsButton;
    FBasic_Menu_SmallWindowWithHeader_Redesign_COn Clicked On Clicked;
    void On Clicked();
    FButtonStyle ButtonStyle;
    bool Brackets Active;
    bool SidesActive;
    TEnumAsByte<ENUM_MenuColors::Type> HeaderColor;

    void SetHeaderText(FText NewHeaderText);
    bool IsHovering();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void SetCounterText(FText InText);
    void ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader_Redesign(int32 EntryPoint);
    void On Clicked__DelegateSignature();
};

#endif
