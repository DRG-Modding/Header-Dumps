#ifndef UE4SS_SDK_UI_DLC_Season_HPP
#define UE4SS_SDK_UI_DLC_Season_HPP

class UUI_DLC_Season_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Click;
    UWidgetAnimation* Hover;
    UWidgetAnimation* Idle;
    UButton* Button_Outer;
    UImage* Image_193;
    UImage* Shadow;
    bool NewVar_0;
    UGameDLC* dlc;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_DLC_Season(int32 EntryPoint, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const FString CallFunc_GetSonyAdditionalContentId_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsDCLCheckComplete_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
}

#endif
