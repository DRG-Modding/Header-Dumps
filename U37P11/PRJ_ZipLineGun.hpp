#ifndef UE4SS_SDK_PRJ_ZipLineGun_HPP
#define UE4SS_SDK_PRJ_ZipLineGun_HPP

class APRJ_ZipLineGun_C : public AZipLineProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UZipLineUsable* ZipLineUsable;
    class UStaticMeshComponent* Screw_A;
    class UPointLightComponent* Light_Start;
    class USkeletalMeshComponent* SK_ZipPole_B;
    class UStaticMeshComponent* SM_ZipPole_Projectile_A;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
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

    void GetNearestPointOnLine(FVector WorldPosition, FVector LineStart, FVector LineEnd, FVector& NearestLinePosition);
    void Finish Zip Line();
    void UserConstructionScript();
    void On Hit();
    void OnShoot(FVector Origin, FVector EndLocation);
    void SetCollider();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void All_ConnectWithZipLine(FVector Location, float VerticalSpeed);
    void BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_PRJ_ZipLineGun(int32 EntryPoint);
};

#endif
