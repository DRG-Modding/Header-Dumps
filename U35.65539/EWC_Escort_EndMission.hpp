#ifndef UE4SS_SDK_EWC_Escort_EndMission_HPP
#define UE4SS_SDK_EWC_Escort_EndMission_HPP

class UEWC_Escort_EndMission_C : UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    UEnemyGroupDescriptor* EnemyGroup;

    void StartWave();
    void ExecuteUbergraph_EWC_Escort_EndMission(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, const TArray<FPlayerSphere>& CallFunc_GetPlayerSpheres_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FPlayerSphere CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_FindPointAlongPathTo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FVector CallFunc_FindRandomNearbyPositionOnNavmesh_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array);
}

#endif
