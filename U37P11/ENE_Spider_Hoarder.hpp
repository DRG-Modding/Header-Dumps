#ifndef UE4SS_SDK_ENE_Spider_Hoarder_HPP
#define UE4SS_SDK_ENE_Spider_Hoarder_HPP

class AENE_Spider_Hoarder_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPhysicalAnimationComponent* PhysicalAnimation;
    class USkeletalMeshComponent* SK_HoarderHead_A;
    class USkeletalMeshComponent* SK_HoarderBack_A;
    class UPointLightComponent* PointLight1;
    class UAudioComponent* AudioScaredEnd;
    class UAudioComponent* AudioScaredLoop;
    class UAudioComponent* AudioScaredBegin;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class USphereComponent* Sphere;
    float Timeline_2_Light_IntensityB_BC447F934BD2DA41ABECE685727C08B5;
    float Timeline_2_Light_Intensity_G_BC447F934BD2DA41ABECE685727C08B5;
    float Timeline_2_Light_Intensity_R_BC447F934BD2DA41ABECE685727C08B5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_BC447F934BD2DA41ABECE685727C08B5;
    class UTimelineComponent* Timeline_2;
    float Timeline_0_Light_Intensity_05D4ADFF47FD2761700DC0BF63BC24DC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_05D4ADFF47FD2761700DC0BF63BC24DC;
    class UTimelineComponent* Timeline_0;
    TArray<class UResourceData*> Loot;
    FVector2D ChunkCountRange;
    TArray<class UResourceData*> ResourceTypes;
    float DamageLootDropChance;
    float DamageLootDropCoolDown;
    float LastLootDrop;
    FVector2D ChunkValueRange;
    class AActor* TargetActor;
    bool IsScared;
    bool IsAlive;
    float AlertedSpeed;
    int32 DamageTimes;
    FTimerHandle NewTargetHandle;

    void UpdateTarget(float MaxDistance, bool& OutTargetChanged);
    void HasLoot(bool& Has Loot);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void OnRagdoll();
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void DropLoot();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrowComplete__DelegateSignature(bool IsEmerging);
    void HandleTargetServerside();
    void OnUpdateTarget();
    void BndEvt__AudioScaredBegin_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
    void BndEvt__AudioScaredLoop_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature();
    void All_ScaredChanged(bool InScared);
    void HandleScaredAnim();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void ExecuteUbergraph_ENE_Spider_Hoarder(int32 EntryPoint);
};

#endif
