#ifndef UE4SS_SDK_ITM_InfoBox_HPP
#define UE4SS_SDK_ITM_InfoBox_HPP

class UITM_InfoBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ItemDesc_Hover;
    UWidgetAnimation* ItemDesc_Click;
    UBlurBackground_C* BlurBackground;
    UButton* BTN_Info;
    UTextBlock* DATA_GearDesc;
    UOverlay* InfoOverlay;
    UVerticalBox* ItemDescHolder;
    USizeBox* SBOX_ButtonGFX;
    FText Text;
    TEnumAsByte<ENU_TextCase::Type> Text Case;
    bool Open;

    void SetOpen(bool IsOpen, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetText(FText InText, uint8 InText Case);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_InfoBox(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_2, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
}

#endif
