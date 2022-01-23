#ifndef UE4SS_SDK_BP_TutorialConsole_HPP
#define UE4SS_SDK_BP_TutorialConsole_HPP

class ABP_TutorialConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    FName LevelToLoad;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_TutorialConsole(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class ABP_SpaceRig_Gamemode_C* K2Node_DynamicCast_AsBP_Space_Rig_Gamemode, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetNumPlayers_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UConsoleScreen_Tutorial_C* K2Node_DynamicCast_AsConsole_Screen_Tutorial, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UConsoleScreen_Tutorial_C* K2Node_DynamicCast_AsConsole_Screen_Tutorial_1, bool K2Node_DynamicCast_bSuccess_3);
};

#endif
