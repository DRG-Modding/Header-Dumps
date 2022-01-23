#ifndef UE4SS_SDK_UI_ClaimableRewards_View_HPP
#define UE4SS_SDK_UI_ClaimableRewards_View_HPP

class UUI_ClaimableRewards_View_C : public UClaimableRewardViewWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBlurIn;
    class UCanvasPanel* BackgroundCanvas;
    class UBlurBackground_C* BlurBackground;
    class UHorizontalBox* EntryBox;
    class UVerticalBox* LinesBox;
    class UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    bool ShowBackgroundBlur;
    class UAudioComponent* AudioSpeak;
    FUI_ClaimableRewards_View_COnMissionControlStarted OnMissionControlStarted;
    void OnMissionControlStarted(class UAudioComponent* MissionControlAudio);
    FUI_ClaimableRewards_View_COnMissionControlFinished OnMissionControlFinished;
    void OnMissionControlFinished();
    int32 RewardsClaimed;
    FUI_ClaimableRewards_View_COnRewardsClaimed OnRewardsClaimed;
    void OnRewardsClaimed();
    FUI_ClaimableRewards_View_COnRewardsAndMissionControlFinished OnRewardsAndMissionControlFinished;
    void OnRewardsAndMissionControlFinished();
    bool RewardsAndMissionControlFinished;
    TArray<class UUI_ClaimableRewards_Entry_C*> RewardEntries;

    void GetLine(class UHorizontalBox*& EntryBox, class UHorizontalBox* CurrentLine, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UHorizontalBox* CallFunc_AddChildToVerticalBoxEx_ReturnValue, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalBox* K2Node_DynamicCast_AsHorizontal_Box, bool K2Node_DynamicCast_bSuccess);
    void SetupView(FClaimableRewardView InViewData, class UUI_ClaimableRewards_Entry_C* EntryWidget, TSubclassOf<class UUserWidget> BackgroundWidget, bool CallFunc_IsValidClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FAnchors K2Node_MakeStruct_Anchors, int32 CallFunc_Add_IntInt_ReturnValue, class UHorizontalBox* CallFunc_GetLine_EntryBox, FSetupViewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FClaimableRewardEntry CallFunc_Array_Get_Item, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ClaimableRewards_Entry_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
    void TryFinish(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void StopAudio(bool CallFunc_IsValid_ReturnValue);
    void OnAudioFinished_Event();
    void Start Mission Control Speak();
    void ShowBlur();
    void ShowMouseCursor();
    void Move In Rewards();
    void OnRewardClaimed(class UClaimableRewardEntryWidget* InEntryWidget);
    void ReceiveEndFlow();
    void ReceiveDataChanged();
    void ReceiveBeginFlow();
    void ExecuteUbergraph_UI_ClaimableRewards_View(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, float CallFunc_SpeakManually_Duration, class UAudioComponent* CallFunc_SpeakManually_AudioComponent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FExecuteUbergraph_UI_ClaimableRewards_ViewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UClaimableRewardEntryWidget* K2Node_CustomEvent_InEntryWidget, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_ClaimableRewards_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2);
    void OnRewardsAndMissionControlFinished__DelegateSignature();
    void OnRewardsClaimed__DelegateSignature();
    void OnMissionControlFinished__DelegateSignature();
    void OnMissionControlStarted__DelegateSignature(class UAudioComponent* MissionControlAudio);
};

#endif
