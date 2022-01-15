#ifndef UE4SS_SDK_BP_FacilityElectricAttack_HPP
#define UE4SS_SDK_BP_FacilityElectricAttack_HPP

class UBP_FacilityElectricAttack_C : UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystem* ParticleSystem;
    UParticleSystemComponent* ParticleInstance;
    UDamageComponent* ParentDamage;
    float Delay;
    TArray<int32> Feedbackbar;
    float Progress;
    int32 Stage;
    TArray<FName> Ring_A_Sockets;
    TArray<FName> Ring_B_Sockets;
    TArray<FName> Ring_C_Sockets;
    TArray<FName> Ring_D_Sockets;
    TArray<ABP_Electrical_Antenna_C*> Antennaes;

    void OnRep_Stage(bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<FName>& Temp_name_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, ABP_Electrical_Antenna_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<FName>& K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, ATetherStation* K2Node_DynamicCast_AsTether_Station, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, FTransform CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Electrical_Antenna_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, UMaterialInterface* K2Node_Select_Default_1);
    void SetupDamage(UDamageComponent* Damage, TArray<int32>& Feedbackbar, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveAttackTarget(AActor* Target);
    void AttackEffets();
    void ReceiveAbortAttack();
    void ExecuteUbergraph_BP_FacilityElectricAttack(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, AActor* K2Node_Event_target, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
}

#endif
