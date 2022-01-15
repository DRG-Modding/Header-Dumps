#ifndef UE4SS_SDK_W_Tutorial_RestartTutorial_HPP
#define UE4SS_SDK_W_Tutorial_RestartTutorial_HPP

class UW_Tutorial_RestartTutorial_C : UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle TimerHandle;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCloseTutorial();
    void ExecuteUbergraph_W_Tutorial_RestartTutorial(int32 EntryPoint, OnOpenedEscapeMenu__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
}

#endif
