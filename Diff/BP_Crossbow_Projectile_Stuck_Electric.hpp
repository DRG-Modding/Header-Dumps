#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Electric_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Electric_HPP

class ABP_Crossbow_Projectile_Stuck_Electric_C : public ABP_Crossbow_Projectile_Stuck_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ArcAreaDisplay;
    class UCrossbowStuckProjectileEffectElectric* EffectElectric;
    float FadeIn_Scale_643276574A22DD1BAF32FA8777128C4F;
    TEnumAsByte<ETimelineDirection::Type> FadeIn__Direction_643276574A22DD1BAF32FA8777128C4F;
    class UTimelineComponent* FadeIn;
    float FadeOut_Scale_0B2089634E6A5E37A98116BA23E26A4F;
    TEnumAsByte<ETimelineDirection::Type> FadeOut__Direction_0B2089634E6A5E37A98116BA23E26A4F;
    class UTimelineComponent* FadeOut;
    float RingPulse_Scale_60E9F5BE447AB5F280A154BA86AB1702;
    TEnumAsByte<ETimelineDirection::Type> RingPulse__Direction_60E9F5BE447AB5F280A154BA86AB1702;
    class UTimelineComponent* RingPulse;
    float DebugTimer;
    class UMaterialInstanceDynamic* ArcAreaDynamicMaterial;
    FLinearColor IndicatorAreaColor;
    bool IsActive;
    bool FirstTimeFadeOut;

    void UserConstructionScript();
    void RingPulse__FinishedFunc();
    void RingPulse__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void DoIndicatorPulse();
    void FadeInAndOut();
    void CancelEffect();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Crossbow_Projectile_Stuck_Electric(int32 EntryPoint);
};

#endif
