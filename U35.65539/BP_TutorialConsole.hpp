#ifndef UE4SS_SDK_BP_TutorialConsole_HPP
#define UE4SS_SDK_BP_TutorialConsole_HPP

class ABP_TutorialConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextRenderComponent* TextRender;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMesh1;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    FName LevelToLoad;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_TutorialConsole(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UBP_SpaceRig_Gamemode_C* K2Node_DynamicCast_AsBP_Space_Rig_Gamemode, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetNumPlayers_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsoleScreen_Tutorial_C* K2Node_DynamicCast_AsConsole_Screen_Tutorial, bool K2Node_DynamicCast_bSuccess_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UConsoleScreen_Tutorial_C* K2Node_DynamicCast_AsConsole_Screen_Tutorial_1, bool K2Node_DynamicCast_bSuccess_3);
}

#endif
