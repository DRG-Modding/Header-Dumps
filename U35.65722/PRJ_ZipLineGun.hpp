#ifndef UE4SS_SDK_PRJ_ZipLineGun_HPP
#define UE4SS_SDK_PRJ_ZipLineGun_HPP

class APRJ_ZipLineGun_C : public AZipLineProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Screw_A;
    class UPointLightComponent* Light_Start;
    class USkeletalMeshComponent* SK_ZipPole_B;
    class UStaticMeshComponent* SM_ZipPole_Projectile_A;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UInstantUsable* InstantUsable;
    class UParticleSystemComponent* Particle_Endpoint;
    class UParticleSystemComponent* Trail;
    class UPointLightComponent* Light_End;
    class USceneComponent* EndPoint;
    class UCableComponent* Cable;
    class UCapsuleComponent* Capsule;
    class USceneComponent* DefaultSceneRoot;
    FVector Start;
    FVector End;
    bool IsSet;
    float Progress;
    float LifeTime;
    FLinearColor LineColor;
    float LineThickness;
    class UMaterialInstanceDynamic* CylLightEnd_DM;
    class UMaterialInstanceDynamic* CylLightStart_DM;
    FLinearColor LightColorEnd;
    FLinearColor LightColorStart;

    void GetNearestPointOnLine(FVector WorldPosition, FVector LineStart, FVector LineEnd, FVector& NearestLinePosition, FVector LineVector, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void Finish Zip Line(class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void UserConstructionScript();
    void On Hit();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnShoot(FVector Origin, FVector EndLocation);
    void ReceiveTick(float DeltaSeconds);
    void SetCollider();
    void ReceiveBeginPlay();
    void All_ConnectWithZipLine(FVector Location, float VerticalSpeed);
    void ExecuteUbergraph_PRJ_ZipLineGun(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector K2Node_Event_Origin, FVector K2Node_Event_EndLocation, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float K2Node_Event_DeltaSeconds, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, FVector K2Node_CustomEvent_Location, float K2Node_CustomEvent_VerticalSpeed, FVector CallFunc_GetNearestPointOnLine_NearestLinePosition, float CallFunc_Abs_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_FMax_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1);
};

#endif
