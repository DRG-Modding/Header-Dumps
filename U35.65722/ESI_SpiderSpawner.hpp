#ifndef UE4SS_SDK_ESI_SpiderSpawner_HPP
#define UE4SS_SDK_ESI_SpiderSpawner_HPP

class AESI_SpiderSpawner_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Spawn1;
    class USkeletalMeshComponent* Spawn2;
    class USceneComponent* WalkPoint6;
    class USceneComponent* WalkPoint5;
    class USceneComponent* WalkPoint4;
    class USceneComponent* WalkPoint3;
    class USceneComponent* WalkPoint2;
    class USceneComponent* WalkPoint1;
    class USkeletalMeshComponent* Spawner_Eye1_Rig;
    class USkeletalMeshComponent* Spawner_Eye4_Rig;
    class USkeletalMeshComponent* Spawner_Eye3_Rig;
    class USkeletalMeshComponent* Spawner_Eye2_Rig;
    class USkeletalMeshComponent* SK_Spawner;
    class USceneComponent* DefaultSceneRoot;
    TArray<int32> CurrPos;
    TArray<int32> EndPoint;
    TArray<float> StartTime;
    float WalkTime;
    TArray<bool> IsWalking;
    TArray<class USceneComponent*> WalkPoints;
    TArray<class USkeletalMeshComponent*> Spiders;
    TArray<FRotator> StartRotation;

    void UpdateWalking(int32 Idx, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, FRotator CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Get_Item_3, FVector CallFunc_GetPointPos_Pos, FVector CallFunc_GetPointPos_Pos_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_ComposeRotators_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_4, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Get_Item_8, FVector CallFunc_GetPointPos_Pos_2, FVector CallFunc_GetPointPos_Pos_3, int32 CallFunc_Array_Get_Item_9, float CallFunc_GetRealTimeSeconds_ReturnValue, bool CallFunc_Array_Get_Item_10, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FRotator CallFunc_RLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult);
    void WalkToPoint(class USkeletalMeshComponent* Spider, int32 Idx, const bool Temp_bool_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void GetPointPos(int32 Index, FVector& Pos, class USceneComponent* CallFunc_Array_Get_Item);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Delay1();
    void Delay2();
    void ExecuteUbergraph_ESI_SpiderSpawner(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, float K2Node_Event_DeltaSeconds, TArray<class USceneComponent*>& K2Node_MakeArray_Array_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2);
};

#endif
