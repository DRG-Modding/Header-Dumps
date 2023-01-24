#ifndef UE4SS_SDK_BP_FriendlyShredder_HPP
#define UE4SS_SDK_BP_FriendlyShredder_HPP

class ABP_FriendlyShredder_C : public AENE_Shredder_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UFSDAudioComponent* AccelerationSound;
    class UFSDAudioComponent* MoveSound;
    class UFSDAudioComponent* FriendlyShredderStandingDown;
    class UFSDAudioComponent* FriendlyShredderEngagedWithTarget;
    class UFSDAudioComponent* FriendlyShredderTargetFound;
    class UPointLightComponent* PointLight;
    class USphereComponent* SlapCollision;
    class UInstantUsable* InstantUsable;
    float MaxDamageBeforeDeath;
    float MaxAcceleration;
    float ShakeMeshTime;
    class UMaterialInstanceDynamic* ShredderGlowDynaMatRef;
    float lerpAlpha;
    FRotator LastRotationToTarget;
    float RotationRange;
    class AActor* GrenadeInstance;
    float MovementSampleTimer;
    float LastVelocity;
    float CutoffDiff;
    float maxLifeDuration;
    FName CurrentSFXState;

    void BndEvt__BP_FriendlyShredder_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__BP_FriendlyShredder_MeleeAttack_K2Node_ComponentBoundEvent_1_MeleeAttackDelegate__DelegateSignature();
    void GiveSpeedBoost();
    void RemoveSpeedBoost();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void HandleRotationToTarget(float DeltaTime);
    void destroy(class AActor* DestroyedActor);
    void PlayAccelerationSound();
    void OnMessageAI(FName TriggerName);
    void ExecuteUbergraph_BP_FriendlyShredder(int32 EntryPoint);
};

#endif
