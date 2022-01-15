#ifndef UE4SS_SDK_Button_LaunchTutorial_HPP
#define UE4SS_SDK_Button_LaunchTutorial_HPP

class UButton_LaunchTutorial_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonCutCorner_C* Basic_ButtonCutCorner;

    void OnPlayerJoined(UFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(UFSDPlayerState* PlayerState);
    void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void UpdateButtonVisibility();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Button_LaunchTutorial(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
}

#endif
