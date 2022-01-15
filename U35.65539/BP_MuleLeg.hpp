#ifndef UE4SS_SDK_BP_MuleLeg_HPP
#define UE4SS_SDK_BP_MuleLeg_HPP

class ABP_MuleLeg_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* MiniMuleLegPickUp;
    UAudioComponent* MiniMuleLegDrop;
    UAudioComponent* AudioPingWhenPickedUp;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* Distress_Sphere;
    UPointLightComponent* PointLight;
    float Beacon_Alpha_5F66972149AD0193977EA08FF82B6FB4;
    float Beacon_Scale_5F66972149AD0193977EA08FF82B6FB4;
    TEnumAsByte<ETimelineDirection::Type> Beacon__Direction_5F66972149AD0193977EA08FF82B6FB4;
    UTimelineComponent* Beacon;
    bool IsVisibleOnScanner;
    TArray<ABP_MiniMule_Salvage_C*> PingingMules;
    TArray<ABP_MiniMule_Salvage_C*> AllMules;

    void GetDistToNearestMULE(float& OutDist, float NearestDistance, float ThisDistance, UBP_MiniMule_Salvage_C* ThisMule, UBP_MiniMule_Salvage_C* NearestMule, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetNeedsLegs_OutNeedsLegs, UBP_MiniMule_Salvage_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<UBP_MiniMule_Salvage_C*>& CallFunc_GetAllActorsOfClass_OutActors, float CallFunc_Sqrt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue);
    void UpdateBeacon(bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsComponentRegisteredWithScanner_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_3, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1);
    void InitVisibleOnScanner(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UBP_MiniMule_Salvage_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, UBP_MiniMule_Salvage_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SetPingedByMule(UBP_MiniMule_Salvage_C* InMiniMule, bool InPinged, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void OnRep_IsVisibleOnScanner();
    void Beacon__FinishedFunc();
    void Beacon__UpdateFunc();
    void ReceiveBeginPlay();
    void DisableDistressSphere();
    void SetVisibleOnScanner();
    void OnDropped_Event_0();
    void OnPickedUp_Event();
    void Ping Beacon();
    void OnDisableLegSpheres_Event();
    void Ping While Carried();
    void ExecuteUbergraph_BP_MuleLeg(int32 EntryPoint, CarriableEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, CarriableEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, USalvageObjective* K2Node_DynamicCast_AsSalvage_Objective, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDistToNearestMULE_OutDist, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_GetDistToNearestMULE_OutDist_1, float CallFunc_MapRangeClamped_ReturnValue_1);
}

#endif
