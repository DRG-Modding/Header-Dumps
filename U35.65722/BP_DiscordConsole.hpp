#ifndef UE4SS_SDK_BP_DiscordConsole_HPP
#define UE4SS_SDK_BP_DiscordConsole_HPP

class ABP_DiscordConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube1;
    class UBP_DiscordInstantUsable_C* BP_DiscordInstantUsable;
    class UBoxComponent* ProxmityTrigger;
    class UWidgetComponent* PSA;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    float LastUpdate;
    bool IsUserIn;
    int32 OverlapCount;
    class UConsole_DiscordScreen_C* DiscordConsole;
    class ABP_PlayerController_SpaceRig_C* Player;

    void ValidGetPlayer(class ABP_PlayerController_SpaceRig_C*& Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void SetUsable(bool Usable, class ABP_PlayerController_SpaceRig_C* CallFunc_ValidGetPlayer_Player, bool CallFunc_IsValid_ReturnValue);
    void Answer(bool Yes);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void UserIn(bool isInServer);
    void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RefreshUsable();
    void OnUsedClient(class ABP_PlayerControllerBase_C* User);
    void callRefreshUsable();
    void BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_DiscordConsole(int32 EntryPoint, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_CustomEvent_Yes, FString CallFunc_Conv_IntToString_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class UDiscord_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_isInServer, float CallFunc_Add_FloatFloat_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_RecievedDiscordReward_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_RecievedDiscordReward_ReturnValue_1, FExecuteUbergraph_BP_DiscordConsoleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UConsole_DiscordScreen_C* K2Node_DynamicCast_AsConsole_Discord_Screen, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_6, int32 Temp_int_Variable_1, FExecuteUbergraph_BP_DiscordConsoleK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, int32 CallFunc_AddCredits_ReturnValue, class ABP_PlayerControllerBase_C* K2Node_CustomEvent_User, FDiscordRewardNotification K2Node_MakeStruct_DiscordRewardNotification, FExecuteUbergraph_BP_DiscordConsoleK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_3, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_4, FText CallFunc_MakeLiteralText_ReturnValue_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, EFSDFaction CallFunc_GetFaction_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_4, FText CallFunc_MakeLiteralText_ReturnValue_5, class ABP_PlayerController_SpaceRig_C* CallFunc_ValidGetPlayer_Player, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_RewardReceived_ReturnValue, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5);
};

#endif