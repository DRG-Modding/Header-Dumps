#ifndef UE4SS_SDK_BP_DetPack_Charge_HPP
#define UE4SS_SDK_BP_DetPack_Charge_HPP

class ABP_DetPack_Charge_C : ADetPack
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOutlineComponent* outline;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USphereComponent* Useable;
    UDamageComponent* Damage;
    UStaticMeshComponent* Sphere;
    UAudioComponent* Audio;
    USkeletalMeshComponent* SkeletalMesh;
    UBoxComponent* Box;
    float SphereTimeline_Alpha_B734CAA34EA448BC3B483384E4E415D3;
    float SphereTimeline_Scale_B734CAA34EA448BC3B483384E4E415D3;
    TEnumAsByte<ETimelineDirection::Type> SphereTimeline__Direction_B734CAA34EA448BC3B483384E4E415D3;
    UTimelineComponent* SphereTimeline;
    UMaterialInstanceDynamic* SphereMaterial;
    bool IsPlaced;

    void OnRep_IsPlaced();
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void SphereTimeline__FinishedFunc();
    void SphereTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void RecieveHitObject();
    void OnExploded();
    void Show Warning Sphere();
    void ExecuteUbergraph_BP_DetPack_Charge(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue);
}

#endif
