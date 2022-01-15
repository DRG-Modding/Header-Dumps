#ifndef UE4SS_SDK_ITM_SeasonEditor_EmptySpot_HPP
#define UE4SS_SDK_ITM_SeasonEditor_EmptySpot_HPP

class UITM_SeasonEditor_EmptySpot_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Holder;
    UTextBlock* Text_Plus;
    FITM_SeasonEditor_EmptySpot_COnClicked OnClicked;
    void OnClicked(UITM_SeasonEditor_EmptySpot_C* GridSpot, UButton* Button);

    void isEmpty(bool& isEmpty, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void BndEvt__Button_Holder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Holder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Holder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonEditor_EmptySpot(int32 EntryPoint, bool CallFunc_HasAnyChildren_ReturnValue);
    void OnClicked__DelegateSignature(UITM_SeasonEditor_EmptySpot_C* GridSpot, UButton* Button);
}

#endif
