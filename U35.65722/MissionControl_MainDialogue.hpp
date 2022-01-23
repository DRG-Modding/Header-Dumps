#ifndef UE4SS_SDK_MissionControl_MainDialogue_HPP
#define UE4SS_SDK_MissionControl_MainDialogue_HPP

class UMissionControl_MainDialogue_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIn;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class UUI_MaskedImage_C* CharacterIcon;
    class UTextBlock* ClassLabel;
    class UImage* Image_108;
    class UImage* Image_109;
    class UMissionControl_TextAnimator_C* MissionControl_TextAnimator;
    class UDialogDataAsset* PreviewShout;
    bool ManuallyControlled;
    FText Text;
    float Duration;
    float StartTime;
    FTimerHandle TickHandle;
    class UAudioComponent* ManualSpeakComponent;
    FTimerHandle HideHandle;

    void SetPreview(class UDialogDataAsset* PreviewShout, FText PreviewText, bool CallFunc_IsValid_ReturnValue, FDialogStruct CallFunc_SelectEntry_Dialog, bool CallFunc_SelectEntry_ReturnValue, int32 CallFunc_SetText_Unformatted_Length);
    void Reset(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SetText_Unformatted_Length);
    void SetProgress(float Progress, bool& Finished, int32 CursorPos, FString FullString, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void TickRunningText(float CurrentTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_SetProgress_Finished, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
    void StopRunningText();
    void SpeakEntryManually(FDialogStruct Entry, float& Duration, class UAudioComponent*& AudioComponent, FText ShoutText, class USoundBase* ShoutAudio, FDialogStruct SelectedShout, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
    void SpeakManually(class UDialogDataAsset* MissionShout, float& Duration, class UAudioComponent*& AudioComponent, FText ShoutText, class USoundBase* ShoutAudio, FDialogStruct SelectedShout, FDialogStruct CallFunc_SelectEntry_Dialog, bool CallFunc_SelectEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SpeakEntryManually_Duration, class UAudioComponent* CallFunc_SpeakEntryManually_AudioComponent);
    void Start Running Text(FText Text, float Duration);
    void OnMissionShout(const FText& Text, float Duration);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnMissionShoutEnd();
    void HideMissionShout();
    void ExecuteUbergraph_MissionControl_MainDialogue(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, FText K2Node_CustomEvent_Text_1, float K2Node_CustomEvent_Duration_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, float CallFunc_FMax_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const FText K2Node_CustomEvent_Text, float K2Node_CustomEvent_Duration, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_MissionControl_MainDialogueK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_Not_PreBool_ReturnValue, FExecuteUbergraph_MissionControl_MainDialogueK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_MissionControl_MainDialogueK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetGameTimeInSeconds_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_SetProgress_Finished, int32 CallFunc_SetText_Unformatted_Length, FExecuteUbergraph_MissionControl_MainDialogueK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_Select_Default);
};

#endif
