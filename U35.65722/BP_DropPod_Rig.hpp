#ifndef UE4SS_SDK_BP_DropPod_Rig_HPP
#define UE4SS_SDK_BP_DropPod_Rig_HPP

class ABP_DropPod_Rig_C : public ABP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class USphereComponent* Sphere;
    class USpotLightComponent* SpotLight_Thruster;
    class UPointLightComponent* PointLight_Thruster;
    class UStaticMeshComponent* ThrusterPlasma;
    class UCapsuleComponent* ATeamAchievementCollider4;
    class UCapsuleComponent* ATeamAchievementCollider3;
    class UCapsuleComponent* ATeamAchievementCollider2;
    class UCapsuleComponent* ATeamAchievementCollider1;
    class UBoxComponent* Box1;
    class UAudioComponent* AudioLower;
    class UAudioComponent* Audio_0;
    class UAudioComponent* DroppodLaunch;
    class UBoxComponent* DwarfChecker_0;
    FBP_DropPod_Rig_COnLeaveSpacerig OnLeaveSpacerig;
    void OnLeaveSpacerig();
    TArray<class APlayerCharacter*> PlayersInside;
    class UAudioComponent* PlayLeftAudioOnOpenDoor;
    class UAudioComponent* PlayRightAudioOnOpenDoor;
    class UAudioComponent* SpaceRigDrillIdle;
    int32 OldCountdownValue;
    int32 Amount of barrels in seats;
    class UFSDAchievement* ATeamAchievement;

    int32 ActivePlayerCount(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
    void ReceiveBeginPlay();
    void OnMissionSelected(class UGeneratedMission* mission);
    void OnAllDwavesInsidePod(bool AllInside);
    void OnHostInsidePod(bool isInside);
    void OnCountdownCompleted();
    void OnHostTimerChanged(float newTime);
    void BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Check for ATeamAchievement();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DropPod_Rig(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, int32 Temp_int_Array_Index_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UGeneratedMission* K2Node_CustomEvent_Mission, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_AllInside, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_isInside, FExecuteUbergraph_BP_DropPod_RigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_ActivePlayerCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FExecuteUbergraph_BP_DropPod_RigK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, float K2Node_CustomEvent_NewTime, int32 CallFunc_FCeil_ReturnValue, class USoundBase* Temp_object_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, class USoundBase* Temp_object_Variable_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_6, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_7, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_8, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_4, class AActor* K2Node_ComponentBoundEvent_OtherActor_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_4, bool K2Node_ComponentBoundEvent_bFromSweep_4, const FHitResult K2Node_ComponentBoundEvent_SweepResult_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_3, const FHitResult K2Node_ComponentBoundEvent_SweepResult_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_2, const FHitResult K2Node_ComponentBoundEvent_SweepResult_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue_3, class USoundBase* K2Node_Select_Default, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_5, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class APlayerCharacter* K2Node_Event_character_1, class APlayerCharacter* K2Node_Event_character, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_4, FExecuteUbergraph_BP_DropPod_RigK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
    void OnLeaveSpacerig__DelegateSignature();
};

#endif
