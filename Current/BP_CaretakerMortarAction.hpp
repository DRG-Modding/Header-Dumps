#ifndef UE4SS_SDK_BP_CaretakerMortarAction_HPP
#define UE4SS_SDK_BP_CaretakerMortarAction_HPP

class UBP_CaretakerMortarAction_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 BurstCount;
    float TimeBetweenShots;
    int32 BaseBurstSize;
    FTransform Origin;
    FName LastSelectedSocket;
    FVector LastSelectedTargetLocation;
    class APlayerCharacter* LastSelectedTarget;
    int32 ExtraBurstSizePerAditionalPlayer;

    void GetEstimatedStartDuration(float& StartDuration);
    void LaunchProjectile(FVector TargetLocation);
    void OnStarted();
    void FireMortar();
    void OnTriggered();
    void OnStopped();
    void FireBurst();
    void All_ShowPhaseBombLaunch(FName AttachPointName);
    void ExecuteUbergraph_BP_CaretakerMortarAction(int32 EntryPoint);
};

#endif
