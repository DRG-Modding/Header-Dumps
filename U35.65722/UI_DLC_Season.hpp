#ifndef UE4SS_SDK_UI_DLC_Season_HPP
#define UE4SS_SDK_UI_DLC_Season_HPP

class UUI_DLC_Season_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class UButton* Button_Outer;
    class UImage* Image_193;
    class UImage* Shadow;
    bool NewVar_0;
    class UGameDLC* dlc;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_DLC_Season(int32 EntryPoint, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const FString CallFunc_GetSonyAdditionalContentId_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsDCLCheckComplete_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
};

#endif
