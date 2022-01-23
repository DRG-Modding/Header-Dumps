#ifndef UE4SS_SDK_BP_CheatConsole_HPP
#define UE4SS_SDK_BP_CheatConsole_HPP

class ABP_CheatConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CheatConsole(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, ESteamBranch CallFunc_GetSteamBranch_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_ShowCheatTerminal_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

#endif
