#ifndef UE4SS_SDK_BP_LureTarget_HPP
#define UE4SS_SDK_BP_LureTarget_HPP

class ABP_LureTarget_C : APawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFriendlyHealthComponent* FriendlyHealth;
    UFakeFallComponent* FakeFall;
    UWidgetComponent* Widget1;
    UWidgetComponent* Widget;
    USkeletalMeshComponent* Mesh_Hologram;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Mesh_Projector;
    UParticleSystemComponent* P_Grenade_Lure_HolloStreaks;
    UCapsuleComponent* Capsule;
    UDamageComponent* Damage;
    UObjectAttackerPositioning* ObjectAttackerPositioning;
    USceneComponent* DefaultSceneRoot;
    float GlitchAnimationRate_Visibility_C039C82E4E9A2669384696BB798667AF;
    float GlitchAnimationRate_Animation_Rate_C039C82E4E9A2669384696BB798667AF;
    TEnumAsByte<ETimelineDirection::Type> GlitchAnimationRate__Direction_C039C82E4E9A2669384696BB798667AF;
    UTimelineComponent* GlitchAnimationRate;
    float Glitch2_Y_6D7D66B2467FD3C0288C8BA13855B201;
    float Glitch2_X_6D7D66B2467FD3C0288C8BA13855B201;
    float Glitch2_Z_6D7D66B2467FD3C0288C8BA13855B201;
    TEnumAsByte<ETimelineDirection::Type> Glitch2__Direction_6D7D66B2467FD3C0288C8BA13855B201;
    UTimelineComponent* Glitch2;
    float Glitch_Y_96E18DAF461D1987E60A9D86D3431FCD;
    float Glitch_X_96E18DAF461D1987E60A9D86D3431FCD;
    float Glitch_Z_96E18DAF461D1987E60A9D86D3431FCD;
    TEnumAsByte<ETimelineDirection::Type> Glitch__Direction_96E18DAF461D1987E60A9D86D3431FCD;
    UTimelineComponent* Glitch;
    float Disappear_Y_B748642F45FA83EEDB7F8DB0E524EFA5;
    float Disappear_X_B748642F45FA83EEDB7F8DB0E524EFA5;
    float Disappear_Z_B748642F45FA83EEDB7F8DB0E524EFA5;
    TEnumAsByte<ETimelineDirection::Type> Disappear__Direction_B748642F45FA83EEDB7F8DB0E524EFA5;
    UTimelineComponent* Disappear;
    float GrowHologramZ_Y_F6411B824C449290031E39820C54F8D0;
    float GrowHologramZ_X_F6411B824C449290031E39820C54F8D0;
    float GrowHologramZ_Z_F6411B824C449290031E39820C54F8D0;
    TEnumAsByte<ETimelineDirection::Type> GrowHologramZ__Direction_F6411B824C449290031E39820C54F8D0;
    UTimelineComponent* GrowHologramZ;
    float LifeTime;
    UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor FinalColour;
    FLinearColor InitialColour;
    UObject* Animation;
    TArray<UAnimSequence*> Anim;
    UMaterialInstanceDynamic* Base Dynamic Material;
    float RandomZ;
    float RandomY;
    float RandomX;
    UAnimSequence* MainAnimation;
    bool HasGlitched;
    UParticleSystemComponent* LureFX;

    bool GetIsTargetable();
    FVector GetTargetCenterMass(FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    UHealthComponentBase* GetTargetHealthComponent();
    void SetScaleDownLerp(float Z, float Y, float X, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue);
    void SetScaleUpLerp(float Z, float Y, float X, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue);
    void SetScaleLerpFromRandom(float ZRandomConnection, float YRandomConnection, float XRandomConnection, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UAnimSequence* CallFunc_Array_Get_Item);
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
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
    void ReceiveBeginPlay();
    void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void ExecuteUbergraph_BP_LureTarget(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_ComponentBoundEvent_health_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FVector CallFunc_Conv_LinearColorToVector_ReturnValue, FVector CallFunc_Conv_LinearColorToVector_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UAnimSequence* CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_health, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, UParticleSystem* K2Node_Event_particles, FVector K2Node_Event_location, FRotator K2Node_Event_orientation, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
