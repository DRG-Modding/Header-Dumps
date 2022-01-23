#ifndef UE4SS_SDK_OVERLAY_TutorialHeadline_HPP
#define UE4SS_SDK_OVERLAY_TutorialHeadline_HPP

class UOVERLAY_TutorialHeadline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* Enter;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_152;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_C_153;
    class UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    class UDialogDataAsset* Shout;
    FDialogStruct Entry;
    class USoundBase* ShoutAudio;
    bool AudioLoaded;

    void OnLoaded_B1D6AAFE42DA1884720435B25AC72781(class UObject* Loaded);
    void Construct();
    void OnAudioFinished_Event();
    void OnFadeInFinished();
    void OnFadeOutFinished();
    void ExecuteUbergraph_OVERLAY_TutorialHeadline(int32 EntryPoint, FExecuteUbergraph_OVERLAY_TutorialHeadlineK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_OVERLAY_TutorialHeadlineK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsHUDVisible_ReturnValue, FExecuteUbergraph_OVERLAY_TutorialHeadlineK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_OVERLAY_TutorialHeadlineK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsScreenFading_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDialogStruct CallFunc_SelectEntry_Dialog, bool CallFunc_SelectEntry_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
};

#endif
