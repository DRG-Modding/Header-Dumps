#ifndef UE4SS_SDK_BP_Spider_TankBoss_FracturedArmor_HPP
#define UE4SS_SDK_BP_Spider_TankBoss_FracturedArmor_HPP

class ABP_Spider_TankBoss_FracturedArmor_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh20;
    UStaticMeshComponent* StaticMesh19;
    UStaticMeshComponent* StaticMesh18;
    UStaticMeshComponent* StaticMesh17;
    UStaticMeshComponent* StaticMesh16;
    UStaticMeshComponent* StaticMesh15;
    UStaticMeshComponent* StaticMesh14;
    UStaticMeshComponent* StaticMesh13;
    UStaticMeshComponent* StaticMesh12;
    UStaticMeshComponent* StaticMesh11;
    UStaticMeshComponent* StaticMesh10;
    UStaticMeshComponent* StaticMesh9;
    UStaticMeshComponent* StaticMesh8;
    UStaticMeshComponent* StaticMesh7;
    UStaticMeshComponent* StaticMesh6;
    UStaticMeshComponent* StaticMesh5;
    UStaticMeshComponent* StaticMesh4;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_TankBoss_FracturedArmor(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_GetCenterOfMass_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
}

#endif
