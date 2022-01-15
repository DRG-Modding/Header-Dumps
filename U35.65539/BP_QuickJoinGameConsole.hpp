#ifndef UE4SS_SDK_BP_QuickJoinGameConsole_HPP
#define UE4SS_SDK_BP_QuickJoinGameConsole_HPP

class ABP_QuickJoinGameConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UTextRenderComponent* TextRender1;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMesh1;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_QuickJoinGameConsole(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, float K2Node_Event_DeltaSeconds, UConsoleScreen_QuickJoin_C* K2Node_DynamicCast_AsConsole_Screen_Quick_Join, bool K2Node_DynamicCast_bSuccess_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UBP_SpaceRig_Gamemode_C* K2Node_DynamicCast_AsBP_Space_Rig_Gamemode, bool K2Node_DynamicCast_bSuccess_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UConsoleScreen_QuickJoin_C* K2Node_DynamicCast_AsConsole_Screen_Quick_Join_1, bool K2Node_DynamicCast_bSuccess_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
}

#endif
