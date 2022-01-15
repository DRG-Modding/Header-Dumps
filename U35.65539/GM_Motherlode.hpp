#ifndef UE4SS_SDK_GM_Motherlode_HPP
#define UE4SS_SDK_GM_Motherlode_HPP

class AGM_Motherlode_C : UBP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SelectedSpawnLocation;
    ADropPod* MineHead;

    void GetLandingZoneLocation(FVector& Output, FVector NewLocalVar_0, TArray<FVector> PossibleLocations, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, FVector CallFunc_AdjustLandingLocationToGround_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FRoomNode CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FGeneratedRoom CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FRoomItem CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, TSubclassOf<ABP_Motherlode_MiningHeadDropLocation_C> K2Node_ClassDynamicCast_AsBP_Motherlode_Mining_Head_Drop_Location, bool K2Node_ClassDynamicCast_bSuccess);
    void GetMineHead(UBP_MineHead_C*& Output, TArray<UBP_MineHead_C*>& CallFunc_GetAllActorsOfClass_OutActors, UBP_MineHead_C* CallFunc_Array_Get_Item);
    void ReceiveBeginPlay();
    void OnMatchStarted_();
    void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
    void OnCountdownFinished();
    void RocketLaunched();
    void SpawnMissionCriticalItems();
    void ExecuteUbergraph_GM_Motherlode(int32 EntryPoint, FTransform CallFunc_FindEscapePodLocationAtDistance_ReturnValue, MatchStartedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FMusicHandle CallFunc_PlayLibrary_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, UBP_MineHead_C* CallFunc_GetMineHead_Output, const TArray<FText>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, UTerrainPlacementComponent* CallFunc_GetComponentFromClass_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, ADropPod* CallFunc_DropToMission_ReturnValue, FVector CallFunc_GetLandingZoneLocation_Output, TSubclassOf<AMiningPod> CallFunc_GetDropPodEscapeClass_ReturnValue);
}

#endif
