#ifndef UE4SS_SDK_Grenade_Pheromone_HPP
#define UE4SS_SDK_Grenade_Pheromone_HPP

class AGrenade_Pheromone_C : UITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<AFSDPawn*> PheromoneTargets;
    int32 MinGuaranteedTargets;
    int32 AffectEveryNthTarget;
    float EffectRadius;

    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, float CallFunc_GetStatusEffectDuration_ReturnValue, FGearStatEntry CallFunc_FormatStatic_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_FormatStatic_GearStatEntry_1, int32 CallFunc_Array_Add_ReturnValue_1);
    void OnExploded();
    void ApplyPheromones();
    void ExecuteUbergraph_Grenade_Pheromone(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const TArray<AActor*>& Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
}

#endif
