#ifndef UE4SS_SDK_BP_DropPod_Rig_HPP
#define UE4SS_SDK_BP_DropPod_Rig_HPP

class ABP_DropPod_Rig_C : UBP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;
    USphereComponent* Sphere;
    USpotLightComponent* SpotLight_Thruster;
    UPointLightComponent* PointLight_Thruster;
    UStaticMeshComponent* ThrusterPlasma;
    UCapsuleComponent* ATeamAchievementCollider4;
    UCapsuleComponent* ATeamAchievementCollider3;
    UCapsuleComponent* ATeamAchievementCollider2;
    UCapsuleComponent* ATeamAchievementCollider1;
    UBoxComponent* Box1;
    UAudioComponent* AudioLower;
    UAudioComponent* Audio_0;
    UAudioComponent* DroppodLaunch;
    UBoxComponent* DwarfChecker_0;
    FBP_DropPod_Rig_COnLeaveSpacerig OnLeaveSpacerig;
    void OnLeaveSpacerig();
    TArray<APlayerCharacter*> PlayersInside;
    UAudioComponent* PlayLeftAudioOnOpenDoor;
    UAudioComponent* PlayRightAudioOnOpenDoor;
    UAudioComponent* SpaceRigDrillIdle;
    int32 OldCountdownValue;
    int32 Amount of barrels in seats;
    UFSDAchievement* ATeamAchievement;

    int32 ActivePlayerCount(UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
    void ReceiveBeginPlay();
    void OnMissionSelected(UGeneratedMission* mission);
    void OnAllDwavesInsidePod(bool AllInside);
    void OnHostInsidePod(bool isInside);
    void OnCountdownCompleted();
    void OnHostTimerChanged(float newTime);
    void BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Check for ATeamAchievement();
    void OnCharacterEnter(UPlayerCharacter* Character);
    void OnCharacterExit(UPlayerCharacter* Character);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DropPod_Rig(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, int32 Temp_int_Array_Index_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UGeneratedMission* K2Node_CustomEvent_Mission, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_AllInside, UGameStateBase* CallFunc_GetGameState_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_isInside, OnHostTimerChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UGameStateBase* CallFunc_GetGameState_ReturnValue_1, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_ActivePlayerCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, OnCountdownCompleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, float K2Node_CustomEvent_NewTime, int32 CallFunc_FCeil_ReturnValue, USoundBase* Temp_object_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, USoundBase* Temp_object_Variable_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_4, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_5, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_6, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_7, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_8, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_4, AActor* K2Node_ComponentBoundEvent_OtherActor_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_4, bool K2Node_ComponentBoundEvent_bFromSweep_4, const FHitResult K2Node_ComponentBoundEvent_SweepResult_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_3, const FHitResult K2Node_ComponentBoundEvent_SweepResult_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_2, const FHitResult K2Node_ComponentBoundEvent_SweepResult_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue_3, USoundBase* K2Node_Select_Default, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_5, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, UPlayerCharacter* K2Node_Event_character_1, UPlayerCharacter* K2Node_Event_character, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_4, OnMisionSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
    void OnLeaveSpacerig__DelegateSignature();
}

#endif
