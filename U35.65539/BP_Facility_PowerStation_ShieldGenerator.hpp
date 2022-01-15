#ifndef UE4SS_SDK_BP_Facility_PowerStation_ShieldGenerator_HPP
#define UE4SS_SDK_BP_Facility_PowerStation_ShieldGenerator_HPP

class ABP_Facility_PowerStation_ShieldGenerator_C : UBP_Facility_PowerStation_GeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* ActiveParticles1;
    UPathfinderCollisionComponent* PathfinderCollision1;
    UStaticMeshComponent* SM_Facility_Tower_Base_Dummy_01;
    UParticleSystemComponent* P_Shield_Generator_DeathSmoke;
    UNiagaraComponent* Shield Generator effect;
    UBoxComponent* Box;
    UBoxComponent* BlockPlayer;
    UAudioComponent* FacilityPowerStationLoop;
    UPointLightComponent* Light_Phaser01;
    UPointLightComponent* Light_Phaser04;
    UPointLightComponent* Light_Phaser03;
    UPointLightComponent* Light_RightShield;

    TSubclassOf<UBossFightWidget> GetWidgetClass();
    void GetConnectorPoint(TArray<FTransform>& OutTransform, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, TArray<FTransform>& K2Node_MakeArray_Array);
    void Rep_IsCharged(bool isCharged);
    void ReceiveBeginPlay();
    void LaunchPlates();
    void OnHackingComplete();
    void ExecuteUbergraph_BP_Facility_PowerStation_ShieldGenerator(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FTransform CallFunc_GetSocketTransform_ReturnValue_2, FTransform CallFunc_GetSocketTransform_ReturnValue_3, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, TArray<UStaticMeshComponent*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, UStaticMeshComponent* CallFunc_Array_Get_Item, FVector CallFunc_GetForwardVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item_1, UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
