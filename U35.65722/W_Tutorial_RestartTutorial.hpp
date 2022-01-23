#ifndef UE4SS_SDK_W_Tutorial_RestartTutorial_HPP
#define UE4SS_SDK_W_Tutorial_RestartTutorial_HPP

class UW_Tutorial_RestartTutorial_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle TimerHandle;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCloseTutorial();
    void ExecuteUbergraph_W_Tutorial_RestartTutorial(int32 EntryPoint, FExecuteUbergraph_W_Tutorial_RestartTutorialK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_W_Tutorial_RestartTutorialK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
};

#endif
