#ifndef UE4SS_SDK_BP_Pumpkin_Item_HPP
#define UE4SS_SDK_BP_Pumpkin_Item_HPP

class ABP_Pumpkin_Item_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    UParticleSystem* deathParticles;
    USoundCue* deathSound;
    TArray<UStaticMesh*> PumpkinOptions;
    uint8 PumpkinMesh;

    void OnRep_PumpkinMesh(int32 CallFunc_Conv_ByteToInt_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void EvilLaugh(FVector Location);
    void ExecuteUbergraph_BP_Pumpkin_Item(int32 EntryPoint, FVector CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, UDecalComponent* CallFunc_SpawnDecal_ReturnValue, float CallFunc_RandomFloat_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector K2Node_CustomEvent_Location, FVector CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue);
}

#endif
