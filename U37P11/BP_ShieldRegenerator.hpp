#ifndef UE4SS_SDK_BP_ShieldRegenerator_HPP
#define UE4SS_SDK_BP_ShieldRegenerator_HPP

class ABP_ShieldRegenerator_C : public AShieldGeneratorActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystemTopGlow;
    class UParticleSystemComponent* ParticleSystemSparks;
    class UAudioComponent* AudioOutside;
    class UAudioComponent* AudioThrown;
    class USphereComponent* FleeCollider;
    class UStaticMeshComponent* ProjectileSphere;
    class UStaticMeshComponent* SphereExtra2;
    class UStaticMeshComponent* SphereExtra1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* SphereTrigger;
    class USceneComponent* Sizer;
    class UParticleSystemComponent* ParticleSystemBeam;
    class UBoxComponent* ThrowCollider;
    class USkeletalMeshComponent* SkeletalMesh;
    class UAudioComponent* AudioInside;
    class UPointLightComponent* PointLight;
    class USceneComponent* SphereScaler;
    class USkeletalMeshComponent* GeneratorMesh;
    float IntroAnim_Scale_C1CE1C6643D01DDA1DDE1CA672CE4AA9;
    TEnumAsByte<ETimelineDirection::Type> IntroAnim__Direction_C1CE1C6643D01DDA1DDE1CA672CE4AA9;
    class UTimelineComponent* IntroAnim;
    TSubclassOf<class UStatusEffect> StatusEffect;
    TArray<class APlayerCharacter*> ActiveCharacters;
    bool ShieldActive;
    TSubclassOf<class UStatusEffect> LeaveShieldProtectiveAuraSTE;
    bool HasDeployed;

    void ReturnHome();
    void SetScale(float Scale);
    void RemovePlayer(const class APlayerCharacter*& Player);
    void AddPlayer(const class APlayerCharacter*& Player);
    void UserConstructionScript();
    void IntroAnim__FinishedFunc();
    void IntroAnim__UpdateFunc();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void AllBeginDestroy();
    void ReceiveHitObject();
    void ReceiveBeginPlay();
    void BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Failsafe Hit Object();
    void ExecuteUbergraph_BP_ShieldRegenerator(int32 EntryPoint);
};

#endif
