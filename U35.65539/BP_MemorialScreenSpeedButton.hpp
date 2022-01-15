#ifndef UE4SS_SDK_BP_MemorialScreenSpeedButton_HPP
#define UE4SS_SDK_BP_MemorialScreenSpeedButton_HPP

class ABP_MemorialScreenSpeedButton_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh2;
    UPointLightComponent* PointLight;
    USphereComponent* UseSphere;
    USingleUsableComponent* SingleUsable;
    UStaticMeshComponent* StaticMesh1;
    USceneComponent* DefaultSceneRoot;
    float SearchRange;
    TArray<ABP_MemorialWall_C*> MyMemorialWalls;
    bool IsFast;

    void OnRep_IsFast(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, ABP_MemorialWall_C* CallFunc_Array_Get_Item, ABP_MemorialWall_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_MemorialScreenSpeedButton(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, const TArray<AActor*>& K2Node_MakeArray_Array_1, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_Array_Get_Item, ABP_MemorialWall_C* K2Node_DynamicCast_AsBP_Memorial_Wall, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
