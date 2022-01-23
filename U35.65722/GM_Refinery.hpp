#ifndef UE4SS_SDK_GM_Refinery_HPP
#define UE4SS_SDK_GM_Refinery_HPP

class AGM_Refinery_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector LandingZone;
    FSoftClassPath refineryClass;
    TSubclassOf<class AFSDRefinery> RefineryLoadedClass;

    void IsComplexMission(bool& IsComplex, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void Spawn Refinery And Wells(class URefineryObjective* Refinery, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, UClass* CallFunc_LoadClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsComplexMission_IsComplex, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Select_Default, TArray<FVector2D>& K2Node_MakeArray_Array, TArray<FVector2D>& K2Node_MakeArray_Array_1, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, TArray<FVector2D>& K2Node_Select_Default_1);
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void SpawnMissionCriticalItems();
    void DropPodSpawned(class ADropPod* InDropPod);
    void Rocket Launched();
    void RefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_GM_Refinery(int32 EntryPoint, FExecuteUbergraph_GM_RefineryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, class ADropPod* K2Node_CustomEvent_InDropPod, UClass* CallFunc_LoadClass_ReturnValue, class AFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class AFSDRefinery> K2Node_ClassDynamicCast_AsFSDRefinery, bool K2Node_ClassDynamicCast_bSuccess, UClass* CallFunc_LoadClass_ReturnValue_1, FVector CallFunc_GetRefinerySpawnLocation_ReturnValue, TSubclassOf<class AFSDRefinery> K2Node_ClassDynamicCast_AsFSDRefinery_1, bool K2Node_ClassDynamicCast_bSuccess_1, FVector CallFunc_AdjustLandingLocationToGround_ReturnValue, class ADropPod* CallFunc_DropToMission_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, TSubclassOf<class AMiningPod> CallFunc_GetDropPodEscapeClass_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, ERefineryState K2Node_CustomEvent_InRefineryState, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective_1, bool K2Node_DynamicCast_bSuccess_2, FTransform CallFunc_FindEscapePodLocationAtDistance_ReturnValue, FExecuteUbergraph_GM_RefineryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, const FExecuteUbergraph_GM_RefineryTemp_delegate_Variable Temp_delegate_Variable);
};

#endif
