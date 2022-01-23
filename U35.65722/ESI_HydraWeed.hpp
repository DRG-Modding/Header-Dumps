#ifndef UE4SS_SDK_ESI_HydraWeed_HPP
#define UE4SS_SDK_ESI_HydraWeed_HPP

class AESI_HydraWeed_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh1;
    class USkeletalMeshComponent* SkeletalMesh;
    class USkeletalMeshComponent* ShootingPlant_small;
    class USceneComponent* Scale;
    class USceneComponent* DefaultSceneRoot;
    TArray<FSingleAnimationPlayData> Animations;
    int32 Index;
    float LastPlayTime;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ESI_HydraWeed(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, FSingleAnimationPlayData CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, float CallFunc_GetRealTimeSeconds_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

#endif
