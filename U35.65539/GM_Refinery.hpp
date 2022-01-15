#ifndef UE4SS_SDK_GM_Refinery_HPP
#define UE4SS_SDK_GM_Refinery_HPP

class AGM_Refinery_C : UBP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector LandingZone;
    FSoftClassPath refineryClass;
    TSubclassOf<AFSDRefinery> RefineryLoadedClass;

    void IsComplexMission(bool& IsComplex, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void Spawn Refinery And Wells(URefineryObjective* Refinery, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsComplexMission_IsComplex, AActor* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Select_Default, TArray<FVector2D>& K2Node_MakeArray_Array, TArray<FVector2D>& K2Node_MakeArray_Array_1, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, TArray<FVector2D>& K2Node_Select_Default_1);
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void SpawnMissionCriticalItems();
    void DropPodSpawned(ADropPod* InDropPod);
    void Rocket Launched();
    void RefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_GM_Refinery(int32 EntryPoint, MatchStartedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, ADropPod* K2Node_CustomEvent_InDropPod, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, UFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<UFSDRefinery> K2Node_ClassDynamicCast_AsFSDRefinery, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue_1, FVector CallFunc_GetRefinerySpawnLocation_ReturnValue, TSubclassOf<UFSDRefinery> K2Node_ClassDynamicCast_AsFSDRefinery_1, bool K2Node_ClassDynamicCast_bSuccess_1, FVector CallFunc_AdjustLandingLocationToGround_ReturnValue, ADropPod* CallFunc_DropToMission_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, TSubclassOf<AMiningPod> CallFunc_GetDropPodEscapeClass_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, ERefineryState K2Node_CustomEvent_InRefineryState, UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective_1, bool K2Node_DynamicCast_bSuccess_2, FTransform CallFunc_FindEscapePodLocationAtDistance_ReturnValue, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const AsyncLoadCompleteDelegate__DelegateSignature Temp_delegate_Variable);
}

#endif
