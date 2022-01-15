#ifndef UE4SS_SDK_BP_GiftBox_Weightless_HPP
#define UE4SS_SDK_BP_GiftBox_Weightless_HPP

class ABP_GiftBox_Weightless_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    URotatingMovementComponent* RotatingMovement;
    UStaticMeshComponent* Mesh;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    APlayerCharacter* KickedBy;
    TArray<UStaticMesh*> MeshesToChooseFrom;
    TArray<UMaterialInterface*> Mats_Wrapper;
    TArray<UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;

    void OnRep_KickSoundLocation(UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GiftBox_Weightless(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, UMaterialInterface* CallFunc_Array_Get_Item_1, UMaterialInterface* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_LastIndex_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, UMaterialInterface* CallFunc_Array_Get_Item_3);
}

#endif
