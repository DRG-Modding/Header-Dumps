#ifndef UE4SS_SDK_ITM_MissionComplete_MissionState_HPP
#define UE4SS_SDK_ITM_MissionComplete_MissionState_HPP

class UITM_MissionComplete_MissionState_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeInBackground;
    UWidgetAnimation* FadeoutBackground;
    UWidgetAnimation* FadeOutOverlay;
    UImage* BlackBackground;
    UCanvasPanel* OverlayRoot;
    FITM_MissionComplete_MissionState_COnFadeOutOverlayFinished OnFadeOutOverlayFinished;
    void OnFadeOutOverlayFinished();
    FITM_MissionComplete_MissionState_COnAnnouncementFinished OnAnnouncementFinished;
    void OnAnnouncementFinished();
    FITM_MissionComplete_MissionState_COnFadeOutBackgroundFinished OnFadeOutBackgroundFinished;
    void OnFadeOutBackgroundFinished();

    void UpdateBackgroundImage(UTexture2D* Texture, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UTexture2D* CallFunc_GetBiomeLargeImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
    void SetCanvasWidget(UWidget* Content, FAnchors K2Node_MakeStruct_Anchors, FMargin K2Node_MakeStruct_Margin, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
    void ShowCurrentMission(float StartDelay, int32 CurrentStage, UDeepDive* DeepDive, USchematic* Temp_object_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDeepDiveRewardItem CallFunc_GetGivenRewardAtStage_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, USchematic* K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue);
    void SignalAnimDone();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Fade Out Overlay(float Duration);
    void OnOverlayFinished();
    void success(float StartDelay, FText StatusText, USchematic* Reward);
    void Failure(float StartDelay, FText StatusText);
    void OnBackgroundFinished();
    void Fade Out Background(float Duration);
    void ExecuteUbergraph_ITM_MissionComplete_MissionState(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_Duration_1, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_CustomEvent_StartDelay_1, FText K2Node_CustomEvent_StatusText_1, USchematic* K2Node_CustomEvent_Reward, OnAnnouncementFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_MissionComplete_MissionState_Success_C* CallFunc_Create_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_StartDelay, FText K2Node_CustomEvent_StatusText, OnAnnouncementFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UITM_MissionComplete_MissionState_Failure_C* CallFunc_Create_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_CustomEvent_Duration, float CallFunc_FMax_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void OnFadeOutBackgroundFinished__DelegateSignature();
    void OnAnnouncementFinished__DelegateSignature();
    void OnFadeOutOverlayFinished__DelegateSignature();
}

#endif
