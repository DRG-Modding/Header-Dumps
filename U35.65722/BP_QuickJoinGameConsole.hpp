#ifndef UE4SS_SDK_BP_QuickJoinGameConsole_HPP
#define UE4SS_SDK_BP_QuickJoinGameConsole_HPP

class ABP_QuickJoinGameConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UTextRenderComponent* TextRender1;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_QuickJoinGameConsole(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, float K2Node_Event_DeltaSeconds, class UConsoleScreen_QuickJoin_C* K2Node_DynamicCast_AsConsole_Screen_Quick_Join, bool K2Node_DynamicCast_bSuccess_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class ABP_SpaceRig_Gamemode_C* K2Node_DynamicCast_AsBP_Space_Rig_Gamemode, bool K2Node_DynamicCast_bSuccess_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UConsoleScreen_QuickJoin_C* K2Node_DynamicCast_AsConsole_Screen_Quick_Join_1, bool K2Node_DynamicCast_bSuccess_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
