#ifndef UE4SS_SDK_ITM_SeasonEditor_EmptySpot_HPP
#define UE4SS_SDK_ITM_SeasonEditor_EmptySpot_HPP

class UITM_SeasonEditor_EmptySpot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Holder;
    class UTextBlock* Text_Plus;
    FITM_SeasonEditor_EmptySpot_COnClicked OnClicked;
    void OnClicked(class UITM_SeasonEditor_EmptySpot_C* GridSpot, class UButton* Button);

    void isEmpty(bool& isEmpty);
    void BndEvt__Button_Holder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Holder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Holder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonEditor_EmptySpot(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UITM_SeasonEditor_EmptySpot_C* GridSpot, class UButton* Button);
};

#endif
