#ifndef UE4SS_SDK_PLS_Base_HPP
#define UE4SS_SDK_PLS_Base_HPP

class APLS_Base_C : public AProceduralSetup
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UMaterial* OutlineMaterial;
    TArray<class URoomGenerator*> Starting Rooms;
    FPLS_Base_CCompletedGenerationPass CompletedGenerationPass;
    void CompletedGenerationPass(int32 pass, TEnumAsByte<PLS_Passes::Type> PLS Pass);
    class UMusicLibrary* MusicOverride;

    void EnsureSafelandingsite(FVector NewLocalVar_0, FVector CallFunc_MakeVector_ReturnValue);
    class UProceduralController* GetProceduralController(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AFSDPlayerController* CallFunc_GetLocalFSDPlayerController_ReturnValue, class UProceduralController* CallFunc_GetComponentByClass_ReturnValue);
    void SpawnCriticalItems(bool CallFunc_HasAuthority_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    bool HasSelectedCharacter(class AFSDPlayerState* FSDPlayerState, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue);
    void CallGenerationComplete(int32 pass, TEnumAsByte<PLS_Passes::Type> PLS Pass, bool CallFunc_HasAuthority_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void PlayMusicAndAmbient(class UMusicLibrary* Temp_object_Variable, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class USoundCue* CallFunc_GetAmbientSounds_ReturnValue, class UMusicLibrary* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, FMusicHandle CallFunc_PlayLibrary_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class USoundBase* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_2, FMusicHandle CallFunc_Play_ReturnValue);
    void SaveInitialState();
    void CreateCaveGraph();
    void GetRandomRoom(TArray<class URoomGenerator*>& Rooms, bool RemoveRoom, class URoomGenerator*& Room, class URoomGenerator* SelectedRoom, int32 Index, int32 CallFunc_Array_LastIndex_ReturnValue, class URoomGenerator* CallFunc_Array_Get_Item, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue);
    void OnLoaded_11827D59481E498DEC10999DAE2915BF(UClass* Loaded);
    void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(UClass* Loaded);
    void ReceiveBeginPlay();
    void BaseLayerCommitDone();
    void FinalCommitDone();
    void CreateSpawn();
    void Generate_Graph();
    void Generate_Pass_1();
    void Generate_Pass_3();
    void Final Pass();
    void Generate_Pass_5_Server();
    void Generate_Pass_5_Clients();
    void GenerateLandscape();
    void Generate_Pass_4();
    void Generate_Pass_6();
    void BeginLiveGeneration();
    void OnPLSDataRecieved();
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    void CreateGraphSecondPass();
    void Generate_Tunnels();
    void StartGenerationOnClient(class AFSDPlayerController* client);
    void GenerateLandscapeFromData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    void CarveTunnels();
    void Generate_Pass_0();
    void Generate_Pass_0_Client();
    void OnCarverDataRecieved(EDebrisItemPass pass);
    void Generate_Pass_2();
    void ExecuteUbergraph_PLS_Base(int32 EntryPoint, FExecuteUbergraph_PLS_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6, FString CallFunc_Concat_StrStr_ReturnValue_7, UClass* Temp_class_Variable, TSoftClassPtr<AActor> CallFunc_GetPostProcessActorClass_Soft_ReturnValue, bool CallFunc_DoAsyncThreadGeneration_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue, UClass* K2Node_CustomEvent_Loaded, bool CallFunc_HasAuthority_ReturnValue_3, FExecuteUbergraph_PLS_BaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_PLS_BaseK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_IsServer_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasObjectivesReplicated_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, TSubclassOf<class AMiningPod> CallFunc_GetDropPodClass_ReturnValue, FVector CallFunc_AdjustLandingLocationToGround_ReturnValue, class UTerrainPlacementComponent* CallFunc_GetComponentFromClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AMiningPod* CallFunc_DropToMission_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, UClass* Temp_class_Variable_1, TSoftClassPtr<ADebrisDataActor> CallFunc_GetDebrisActorSoftClass_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_1, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_2, bool CallFunc_HasSelectedCharacter_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_AllControllersFinishedTransitionToPlay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, UClass* K2Node_CustomEvent_Loaded_1, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_3, const FRoomNode K2Node_Event_roomNode, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_4, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, class UProceduralController* CallFunc_GetProceduralController_ReturnValue, class AFSDPlayerController* K2Node_Event_client, class UProceduralController* CallFunc_GetComponentByClass_ReturnValue, int32 K2Node_Event_seed, const TArray<FRoomNode>& K2Node_Event_rooms, const TArray<FPathObstacle>& K2Node_Event_obstacles, int32 CallFunc_Array_Add_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_CreateItemDepths_ReturnValue, int32 CallFunc_CreateItemDepths_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_9, bool CallFunc_Greater_IntInt_ReturnValue_10, bool CallFunc_Greater_IntInt_ReturnValue_11, bool CallFunc_Greater_IntInt_ReturnValue_12, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_6, EDebrisItemPass K2Node_Event_pass, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FExecuteUbergraph_PLS_BaseK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_IsCarverDataReady_ReturnValue, class UProceduralController* CallFunc_GetProceduralController_ReturnValue_1, bool CallFunc_DoAsyncThreadGeneration_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_17, int32 CallFunc_Add_IntInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue_19, int32 CallFunc_Add_IntInt_ReturnValue_20, int32 CallFunc_Add_IntInt_ReturnValue_21, bool CallFunc_Greater_IntInt_ReturnValue_13, bool CallFunc_Greater_IntInt_ReturnValue_14, bool CallFunc_Greater_IntInt_ReturnValue_15, bool CallFunc_Greater_IntInt_ReturnValue_16, bool CallFunc_Greater_IntInt_ReturnValue_17, bool CallFunc_Greater_IntInt_ReturnValue_18, bool CallFunc_Greater_IntInt_ReturnValue_19, bool CallFunc_Greater_IntInt_ReturnValue_20, bool CallFunc_Greater_IntInt_ReturnValue_21, bool CallFunc_Greater_IntInt_ReturnValue_22, bool CallFunc_Greater_IntInt_ReturnValue_23, TArray<class APostProcessVolume*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class APostProcessVolume* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_24, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, bool CallFunc_IsValid_ReturnValue_3);
    void CompletedGenerationPass__DelegateSignature(int32 pass, TEnumAsByte<PLS_Passes::Type> PLS Pass);
};

#endif
