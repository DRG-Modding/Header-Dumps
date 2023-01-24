#ifndef UE4SS_SDK_BP_IntoxicationComponent_HPP
#define UE4SS_SDK_BP_IntoxicationComponent_HPP

class UBP_IntoxicationComponent_C : public UCharacterIntoxicationComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Seed;
    float DrunkEffectCoolDown;
    float DrunkenMovementNoiseStrength;
    float DrunkenYawNoiseStrength;
    float DrunkenPitchNoiseStrength;
    bool IgnoreMovement;
    bool IgnoreYaw;
    bool IgnorePitch;
    class UMaterialInstanceDynamic* DrunkenEffect;
    FName EffectID;
    float IntoxicationVisualStrength;
    float IntoxicationMovementStrength;
    float DrunkenShoutCoolDown;
    float ShoutCooldownMax;
    float ShoutCooldownMin;
    float BeginShoutIntoxicationLimit;

    void ToPercentStr(float Progress, FString& PercentString);
    void MyLerp(float Current Value, float Target Value, float Delta Time, float& Result);
    void SetPostProcessStrength(float NewStrength);
    int32 GetAlcoholPct(EDrinkableAlcoholStrength Strength);
    void Lerp Movement Stength(float DeltaTime);
    void Push Effects();
    void Pop Effects(FString DebugReason);
    void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
    void ReceivePassOutDrunk();
    void Lerp Post Process Strength(float DeltaTime);
    void ReceiveDrunkEnd();
    void ReceiveDrunkBegin();
    void ExecuteUbergraph_BP_IntoxicationComponent(int32 EntryPoint);
};

#endif
