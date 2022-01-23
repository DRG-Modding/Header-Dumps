#ifndef UE4SS_SDK_EWC_EndMission_Tutorial_HPP
#define UE4SS_SDK_EWC_EndMission_Tutorial_HPP

class UEWC_EndMission_Tutorial_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartWave();
    void ExecuteUbergraph_EWC_EndMission_Tutorial(int32 EntryPoint, class APlayerCharacter* CallFunc_GetRandomPlayer_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_FindPointAlongPathTo_ReturnValue, FVector CallFunc_FindRandomNearbyPositionOnNavmesh_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array);
};

#endif
