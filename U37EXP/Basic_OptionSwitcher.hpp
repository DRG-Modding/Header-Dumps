#ifndef UE4SS_SDK_Basic_OptionSwitcher_HPP
#define UE4SS_SDK_Basic_OptionSwitcher_HPP

class UBasic_OptionSwitcher_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ArrowBox_Text;
    class UBasic_ScrollArrow2_C* ArrowLeft;
    class UBasic_ScrollArrow2_C* ArrowRight;
    class UButton* Button_Left;
    class UButton* Button_Right;
    TArray<FText> options;
    int32 SelectedIndex;
    bool Loop;
    FBasic_OptionSwitcher_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged(FText Value, int32 Index);
    bool White Text;
    TEnumAsByte<ENU_TextCase::Type> TextCase;

    void ContainsOption(FText Option, bool& DoesContain);
    bool RemoveOption(FText& Item);
    void GetOptionCount(int32& Count);
    void ClearOptions();
    void Add Option(FText Option, int32& Index);
    void GetSelectedValue(FText& Value);
    void GetSelectedIndex(int32& Index);
    void SetSelectedValue(FText Value);
    void SetSelectedIndex(int32 NewIndex);
    void Set Options(TArray<FText>& options, int32 DefaultIndex);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_OptionSwitcher(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
};

#endif
