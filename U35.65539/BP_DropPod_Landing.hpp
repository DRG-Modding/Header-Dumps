#ifndef UE4SS_SDK_BP_DropPod_Landing_HPP
#define UE4SS_SDK_BP_DropPod_Landing_HPP

class ABP_DropPod_Landing_C : UBP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* BoscoSpawningPoint;
    UAudioComponent* Audio_0;
    UParticleSystemComponent* ParticleSystem_DroppodDoorRocks;
    UBoxComponent* LeaveDropShipTrigger;
    bool SkipSequence;
    TArray<UAudioComponent*> AudioArray;

    void FadeToBlack(ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue);
    void AttachCharacter(UPlayerCharacter* PlayerCharacter, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UChildActorComponent* CallFunc_FindSpawnPoint_Start);
    bool IsOwnedPlayerStart(UPlayerController* Controller, UChildActorComponent* ComponentAFSDPlayerStart* K2Node_DynamicCast_AsFSDPlayer_Start, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void FindSpawnPoint(UPlayerController* Controller, UChildActorComponent*& Start, bool CallFunc_IsOwnedPlayerStart_ReturnValue, bool CallFunc_IsOwnedPlayerStart_ReturnValue_1, bool CallFunc_IsOwnedPlayerStart_ReturnValue_2, bool CallFunc_IsOwnedPlayerStart_ReturnValue_3);
    void DetachAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SpawnAndStoreAudio(USoundBase* Sound, USceneComponent* AttachToComponent, UAudioComponent*& AudioComponent, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void OnAllPlayersLeftPod();
    void OnDroppodImpact();
    void OnDrillingStarted();
    void ReceiveBeginPlay();
    void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDeparting();
    void OnCharacterEnter(UPlayerCharacter* Character);
    void OnCharacterExit(UPlayerCharacter* Character);
    void OnPlayerCharacterRegistered(UPlayerCharacter* PlayerCharacter);
    void StopListeningToNewPlayers();
    void OnFirstPlayerLeftPod();
    void ExecuteUbergraph_BP_DropPod_Landing(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, PlayerCharacterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UBP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, UBP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UBP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent, UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_1, UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_2, UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_3, UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_4, int32 Temp_int_Loop_Counter_Variable_1, UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, UPlayerCharacter* K2Node_Event_character_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, UPlayerCharacter* K2Node_Event_character, float CallFunc_RandomFloatInRange_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_5, UPlayerCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1);
}

#endif
