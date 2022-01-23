#ifndef UE4SS_SDK_BP_Facility_PowerStation_ShieldGenerator_HPP
#define UE4SS_SDK_BP_Facility_PowerStation_ShieldGenerator_HPP

class ABP_Facility_PowerStation_ShieldGenerator_C : public ABP_Facility_PowerStation_GeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* ActiveParticles1;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class UStaticMeshComponent* SM_Facility_Tower_Base_Dummy_01;
    class UParticleSystemComponent* P_Shield_Generator_DeathSmoke;
    class UNiagaraComponent* Shield Generator effect;
    class UBoxComponent* Box;
    class UBoxComponent* BlockPlayer;
    class UAudioComponent* FacilityPowerStationLoop;
    class UPointLightComponent* Light_Phaser01;
    class UPointLightComponent* Light_Phaser04;
    class UPointLightComponent* Light_Phaser03;
    class UPointLightComponent* Light_RightShield;

    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    void GetConnectorPoint(TArray<FTransform>& OutTransform, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, TArray<FTransform>& K2Node_MakeArray_Array);
    void Rep_IsCharged(bool isCharged);
    void ReceiveBeginPlay();
    void LaunchPlates();
    void OnHackingComplete();
    void ExecuteUbergraph_BP_Facility_PowerStation_ShieldGenerator(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FTransform CallFunc_GetSocketTransform_ReturnValue_2, FTransform CallFunc_GetSocketTransform_ReturnValue_3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, class UStaticMeshComponent* CallFunc_Array_Get_Item, FVector CallFunc_GetForwardVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

#endif
