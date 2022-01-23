#ifndef UE4SS_SDK_Button_LaunchTutorial_HPP
#define UE4SS_SDK_Button_LaunchTutorial_HPP

class UButton_LaunchTutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* Basic_ButtonCutCorner;

    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void UpdateButtonVisibility();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Button_LaunchTutorial(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FExecuteUbergraph_Button_LaunchTutorialK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Button_LaunchTutorialK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
};

#endif
