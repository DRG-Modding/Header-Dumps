#ifndef UE4SS_SDK_BP_Spider_TankBoss_FracturedArmor_HPP
#define UE4SS_SDK_BP_Spider_TankBoss_FracturedArmor_HPP

class ABP_Spider_TankBoss_FracturedArmor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh20;
    class UStaticMeshComponent* StaticMesh19;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_TankBoss_FracturedArmor(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_GetCenterOfMass_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
};

#endif
