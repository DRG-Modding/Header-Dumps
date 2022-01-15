#ifndef UE4SS_SDK_OVERLAY_TutorialHeadline_HPP
#define UE4SS_SDK_OVERLAY_TutorialHeadline_HPP

class UOVERLAY_TutorialHeadline_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* Enter;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_152;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_C_153;
    UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    UDialogDataAsset* Shout;
    FDialogStruct Entry;
    USoundBase* ShoutAudio;
    bool AudioLoaded;

    void OnLoaded_B1D6AAFE42DA1884720435B25AC72781(UObject* Loaded);
    void Construct();
    void OnAudioFinished_Event();
    void OnFadeInFinished();
    void OnFadeOutFinished();
    void ExecuteUbergraph_OVERLAY_TutorialHeadline(int32 EntryPoint, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnAudioFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UObject* K2Node_CustomEvent_Loaded, UObject* Temp_object_Variable, USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsHUDVisible_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsScreenFading_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDialogStruct CallFunc_SelectEntry_Dialog, bool CallFunc_SelectEntry_ReturnValue, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
}

#endif
