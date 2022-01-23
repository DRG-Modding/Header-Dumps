#ifndef UE4SS_SDK_ITM_DLC_Season01_HPP
#define UE4SS_SDK_ITM_DLC_Season01_HPP

class UITM_DLC_Season01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Outer;
    class UImage* Image_DLC;
    class UImage* Image_Glow;
    class UImage* Image_Outline;
    class UOverlay* Overlay_ButtonImage;

    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_DLC_Season01(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
