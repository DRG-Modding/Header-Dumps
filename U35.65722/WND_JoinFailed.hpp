#ifndef UE4SS_SDK_WND_JoinFailed_HPP
#define UE4SS_SDK_WND_JoinFailed_HPP

class UWND_JoinFailed_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UTextBlock* TextBlock_128;

    void OnFailure_EF9B242446B45E709293BAB20166BCB2();
    void OnSuccess_EF9B242446B45E709293BAB20166BCB2();
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Cancel();
    void ExecuteUbergraph_WND_JoinFailed(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FExecuteUbergraph_WND_JoinFailedK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_WND_JoinFailedK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UWindowManager* CallFunc_GetWindowManager_ReturnValue);
};

#endif
