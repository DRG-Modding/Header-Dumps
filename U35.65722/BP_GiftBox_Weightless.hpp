#ifndef UE4SS_SDK_BP_GiftBox_Weightless_HPP
#define UE4SS_SDK_BP_GiftBox_Weightless_HPP

class ABP_GiftBox_Weightless_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* Mesh;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    TArray<class UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;

    void OnRep_KickSoundLocation(class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GiftBox_Weightless(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class UMaterialInterface* CallFunc_Array_Get_Item_1, class UMaterialInterface* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_LastIndex_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, class UMaterialInterface* CallFunc_Array_Get_Item_3);
};

#endif
