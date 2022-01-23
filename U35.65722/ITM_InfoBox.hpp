#ifndef UE4SS_SDK_ITM_InfoBox_HPP
#define UE4SS_SDK_ITM_InfoBox_HPP

class UITM_InfoBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ItemDesc_Hover;
    class UWidgetAnimation* ItemDesc_Click;
    class UBlurBackground_C* BlurBackground;
    class UButton* BTN_Info;
    class UTextBlock* DATA_GearDesc;
    class UOverlay* InfoOverlay;
    class UVerticalBox* ItemDescHolder;
    class USizeBox* SBOX_ButtonGFX;
    FText Text;
    TEnumAsByte<ENU_TextCase::Type> Text Case;
    bool Open;

    void SetOpen(bool IsOpen, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void SetText(FText InText, TEnumAsByte<ENU_TextCase::Type> InText Case);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_InfoBox(int32 EntryPoint, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_2, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
};

#endif
