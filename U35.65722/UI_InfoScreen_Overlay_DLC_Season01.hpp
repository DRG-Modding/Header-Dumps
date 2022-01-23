#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_DLC_Season01_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_DLC_Season01_HPP

class UUI_InfoScreen_Overlay_DLC_Season01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBlurBackground_C* BlurBackground;
    class UButton* Button_Outer;
    class UImage* Glow1;
    class UImage* Glow2;
    class UImage* Image_193;
    bool NewVar_0;
    class UGameDLC* dlc;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_DLC_Season01(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const FString CallFunc_GetSonyAdditionalContentId_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsDCLCheckComplete_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1);
};

#endif
