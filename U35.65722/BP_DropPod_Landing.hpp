#ifndef UE4SS_SDK_BP_DropPod_Landing_HPP
#define UE4SS_SDK_BP_DropPod_Landing_HPP

class ABP_DropPod_Landing_C : public ABP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* BoscoSpawningPoint;
    class UAudioComponent* Audio_0;
    class UParticleSystemComponent* ParticleSystem_DroppodDoorRocks;
    class UBoxComponent* LeaveDropShipTrigger;
    bool SkipSequence;
    TArray<class UAudioComponent*> AudioArray;

    void FadeToBlack(class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue);
    void AttachCharacter(class APlayerCharacter* PlayerCharacter, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class UChildActorComponent* CallFunc_FindSpawnPoint_Start);
    bool IsOwnedPlayerStart(class APlayerController* Controller, class UChildActorComponent* Componentclass AFSDPlayerStart* K2Node_DynamicCast_AsFSDPlayer_Start, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void FindSpawnPoint(class APlayerController* Controller, class UChildActorComponent*& Start, bool CallFunc_IsOwnedPlayerStart_ReturnValue, bool CallFunc_IsOwnedPlayerStart_ReturnValue_1, bool CallFunc_IsOwnedPlayerStart_ReturnValue_2, bool CallFunc_IsOwnedPlayerStart_ReturnValue_3);
    void DetachAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SpawnAndStoreAudio(class USoundBase* Sound, class USceneComponent* AttachToComponent, class UAudioComponent*& AudioComponent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void OnAllPlayersLeftPod();
    void OnDroppodImpact();
    void OnDrillingStarted();
    void ReceiveBeginPlay();
    void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDeparting();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
    void StopListeningToNewPlayers();
    void OnFirstPlayerLeftPod();
    void ExecuteUbergraph_BP_DropPod_Landing(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FExecuteUbergraph_BP_DropPod_LandingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent, class UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_1, class UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_2, class UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_3, class UAudioComponent* CallFunc_SpawnAndStoreAudio_AudioComponent_4, int32 Temp_int_Loop_Counter_Variable_1, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, class APlayerCharacter* K2Node_Event_character_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class APlayerCharacter* K2Node_Event_character, float CallFunc_RandomFloatInRange_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_5, class APlayerCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1);
};

#endif
