#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_DawnOfTheDread_DLC04_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_DawnOfTheDread_DLC04_HPP

class UUI_InfoScreen_Overlay_DawnOfTheDread_DLC04_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Click;
    UWidgetAnimation* Hover;
    UWidgetAnimation* Idle;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBlurBackground_C* BlurBackground;
    UButton* Button_0;
    UImage* Glow1;
    UImage* Glow2;
    UImage* Image_193;
    bool NewVar_0;
    UGameDLC* dlc;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_DawnOfTheDread_DLC04(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const FString CallFunc_GetSonyAdditionalContentId_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsDCLCheckComplete_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue);
}

#endif
