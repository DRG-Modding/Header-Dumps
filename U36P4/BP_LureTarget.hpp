#ifndef UE4SS_SDK_BP_LureTarget_HPP
#define UE4SS_SDK_BP_LureTarget_HPP

class ABP_LureTarget_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFriendlyHealthComponent* FriendlyHealth;
    class UFakeFallComponent* FakeFall;
    class UWidgetComponent* Widget1;
    class UWidgetComponent* Widget;
    class USkeletalMeshComponent* Mesh_Hologram;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_Projector;
    class UParticleSystemComponent* P_Grenade_Lure_HolloStreaks;
    class UCapsuleComponent* Capsule;
    class UDamageComponent* Damage;
    class UObjectAttackerPositioning* ObjectAttackerPositioning;
    class USceneComponent* DefaultSceneRoot;
    float GlitchAnimationRate_Visibility_C039C82E4E9A2669384696BB798667AF;
    float GlitchAnimationRate_Animation_Rate_C039C82E4E9A2669384696BB798667AF;
    TEnumAsByte<ETimelineDirection::Type> GlitchAnimationRate__Direction_C039C82E4E9A2669384696BB798667AF;
    class UTimelineComponent* GlitchAnimationRate;
    float Glitch2_Y_6D7D66B2467FD3C0288C8BA13855B201;
    float Glitch2_X_6D7D66B2467FD3C0288C8BA13855B201;
    float Glitch2_Z_6D7D66B2467FD3C0288C8BA13855B201;
    TEnumAsByte<ETimelineDirection::Type> Glitch2__Direction_6D7D66B2467FD3C0288C8BA13855B201;
    class UTimelineComponent* Glitch2;
    float Glitch_Y_96E18DAF461D1987E60A9D86D3431FCD;
    float Glitch_X_96E18DAF461D1987E60A9D86D3431FCD;
    float Glitch_Z_96E18DAF461D1987E60A9D86D3431FCD;
    TEnumAsByte<ETimelineDirection::Type> Glitch__Direction_96E18DAF461D1987E60A9D86D3431FCD;
    class UTimelineComponent* Glitch;
    float Disappear_Y_B748642F45FA83EEDB7F8DB0E524EFA5;
    float Disappear_X_B748642F45FA83EEDB7F8DB0E524EFA5;
    float Disappear_Z_B748642F45FA83EEDB7F8DB0E524EFA5;
    TEnumAsByte<ETimelineDirection::Type> Disappear__Direction_B748642F45FA83EEDB7F8DB0E524EFA5;
    class UTimelineComponent* Disappear;
    float GrowHologramZ_Y_F6411B824C449290031E39820C54F8D0;
    float GrowHologramZ_X_F6411B824C449290031E39820C54F8D0;
    float GrowHologramZ_Z_F6411B824C449290031E39820C54F8D0;
    TEnumAsByte<ETimelineDirection::Type> GrowHologramZ__Direction_F6411B824C449290031E39820C54F8D0;
    class UTimelineComponent* GrowHologramZ;
    float LifeTime;
    class UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor FinalColour;
    FLinearColor InitialColour;
    class UObject* Animation;
    TArray<class UAnimSequence*> Anim;
    class UMaterialInstanceDynamic* Base Dynamic Material;
    float RandomZ;
    float RandomY;
    float RandomX;
    class UAnimSequence* MainAnimation;
    bool HasGlitched;
    class UParticleSystemComponent* LureFX;

    bool GetIsTargetable();
    FVector GetTargetCenterMass();
    class UHealthComponentBase* GetTargetHealthComponent();
    void SetScaleDownLerp(float Z, float Y, float X);
    void SetScaleUpLerp(float Z, float Y, float X);
    void SetScaleLerpFromRandom(float ZRandomConnection, float YRandomConnection, float XRandomConnection);
    void UserConstructionScript();
    void GrowHologramZ__FinishedFunc();
    void GrowHologramZ__UpdateFunc();
    void Disappear__FinishedFunc();
    void Disappear__UpdateFunc();
    void Glitch__FinishedFunc();
    void Glitch__UpdateFunc();
    void Glitch2__FinishedFunc();
    void Glitch2__UpdateFunc();
    void GlitchAnimationRate__FinishedFunc();
    void GlitchAnimationRate__UpdateFunc();
    void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
    void ReceiveBeginPlay();
    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void ExecuteUbergraph_BP_LureTarget(int32 EntryPoint);
};

#endif
