#ifndef UE4SS_SDK_ITM_DLC_Season01_HPP
#define UE4SS_SDK_ITM_DLC_Season01_HPP

class UITM_DLC_Season01_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Outer;
    UImage* Image_DLC;
    UImage* Image_Glow;
    UImage* Image_Outline;
    UOverlay* Overlay_ButtonImage;

    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_DLC_Season01(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
