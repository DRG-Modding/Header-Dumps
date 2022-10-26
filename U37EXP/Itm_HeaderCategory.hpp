#ifndef UE4SS_SDK_Itm_HeaderCategory_HPP
#define UE4SS_SDK_Itm_HeaderCategory_HPP

class UItm_HeaderCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Main;
    class UTextBlock* ButtonText;
    class UImage* Filled_Left;
    class UImage* Filled_Middle;
    class UImage* Filled_Right;
    class UImage* Outline_Left;
    class UImage* Outline_Middle;
    class UImage* Outline_Right;
    FText Text;
    bool IsSelected;
    bool UseFlatLeftside;
    FItm_HeaderCategory_COnClicked OnClicked;
    void OnClicked();

    void PreConstruct(bool IsDesignTime);
    void SetSelected(bool IsSelected);
    void SetColor(FSlateColor Filled, FSlateColor outline, FSlateColor Text);
    void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetText(FText Text);
    void ExecuteUbergraph_Itm_HeaderCategory(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
